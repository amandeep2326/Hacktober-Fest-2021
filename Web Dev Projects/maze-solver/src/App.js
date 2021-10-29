/* eslint-disable react-hooks/exhaustive-deps */
/* eslint-disable no-unused-vars */
import { useEffect } from 'react';
import './App.css';
import Graph from './algorithms.js/dfs';

function App() {
  const mygraph = new Graph(25, 50);
  const traversal_speed = 5;

  let start_id = '12_10';
  let end_id = '17_20';

  let isMouseDown = false;

  const cellMouseDownHandler = (i, j) => {
    document.getElementById(`${i}_${j}`).style.backgroundColor = "black";
    mygraph.setWall(mygraph.cellId(i, j));

    isMouseDown = true;
  }

  const traverse = (traversal_array, color) => { // Array of cell ids
    let i = 0;

    const interval = setInterval(() => {
      if (i === traversal_array.length) {
        clearInterval(interval);
      } else {
        document.getElementById(traversal_array[i]).style.backgroundColor = color;
        i++;
      }
    }, traversal_speed);
  }

  const cellMouseUpHandler = (i, j) => {
    isMouseDown = false;
  }

  const cellMouseEnterHandler = (i, j) => {
    if (isMouseDown) {
      document.getElementById(`${i}_${j}`).style.backgroundColor = "black";
      mygraph.setWall(mygraph.cellId(i, j));
    }
  }

  useEffect(() => {
    mark_ends();
  }, [])

  const mark_ends = () => {
    document.getElementById(start_id).innerHTML = '<i class="bi bi-asterisk"></i>'
    document.getElementById(end_id).innerHTML = '<i class="bi bi-slash-circle"></i>'
  }

  // const simulate = () => {
  //   const { visited_arr, path } = mygraph.dfs(start_id, end_id);
  //   traverse(visited_arr, 'yellow');
  //   setTimeout(() => {
  //     traverse(path, 'green')
  //   }, visited_arr.length * traversal_speed + 100);
  // }

  const simulate = () => {
    const { visited_arr, path } = mygraph.bfs(start_id, end_id);
    traverse(visited_arr, 'yellow');
    setTimeout(() => {
      traverse(path, 'dodgerblue')
    }, visited_arr.length * traversal_speed + 100);
  }

  return (
    <div className="App">
      {
        mygraph.cell_array.map((row, row_index) => {
          return (
            <div className="row" key={row_index}>
              {
                row.map((cell, column_index) => {
                  return <div className="cell" id={`${row_index}_${column_index}`}
                    key={column_index}
                    // onClick={() => cellClickHandler(row_index, column_index)} 
                    onMouseDown={() => { cellMouseDownHandler(row_index, column_index) }}
                    onMouseUp={() => { cellMouseUpHandler(row_index, column_index) }}
                    onMouseEnter={() => { cellMouseEnterHandler(row_index, column_index) }}
                  >

                  </div>
                })
              }
            </div>
          )
        })
      }
      <button onClick={simulate}>Simulate</button>
    </div>
  );
}

export default App;
