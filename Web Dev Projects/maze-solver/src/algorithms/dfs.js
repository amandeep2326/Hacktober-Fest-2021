/* eslint-disable no-unused-vars */
class Graph {
    constructor(rows, columns) {
        this.rows = rows;
        this.columns = columns;
        this.cell_array = [];

        for(let i = 0; i < rows; i++) {
            this.cell_array.push([]);
            for(let j = 0; j < columns; j++) {
                this.cell_array[i].push(1);
            }
        }
    }

    cellId(i, j) {
        return `${i}_${j}`;
    }

    getCellCoordinates(cell_id) {
        const i_j = cell_id.split('_');
        const i = parseInt(i_j[0]);
        const j = parseInt(i_j[1]);
        return [i,j];
    }

    setWall(cell_id) {
        const i_j = cell_id.split('_');
        const i = parseInt(i_j[0]);
        const j = parseInt(i_j[1]);
        this.cell_array[i][j] = 0;
    }
    
    dfs(start_id, end_id) {
        const visited_arr = [];
        const path = [];

        if(this.dfs_util(start_id, end_id, visited_arr, path)) {
            console.log(path);
            return {visited_arr, path};
        }
        else return {visited_arr, path: []};
    }

    dfs_util(start_id, end_id, visited_arr, path) {
        visited_arr.push(start_id);
        path.push(start_id);

        if(start_id === end_id) return true;

        const [x_, y_] = start_id.split('_');
        const i = parseInt(x_);
        const j = parseInt(y_);

        if(this.cell_array[i - 1] && this.cell_array[i - 1][j] && !visited_arr.includes(this.cellId(i - 1, j))) {
            if(this.dfs_util(this.cellId(i - 1, j), end_id, visited_arr, path)) return true;
            else path.pop();
        }

        if(this.cell_array[i + 1] && this.cell_array[i + 1][j] && !visited_arr.includes(this.cellId(i + 1, j))) {
            if(this.dfs_util(this.cellId(i + 1, j), end_id, visited_arr, path)) return true;
            else path.pop();
        }

        if(this.cell_array[i] && this.cell_array[i][j - 1] && !visited_arr.includes(this.cellId(i, j - 1))) {
            if(this.dfs_util(this.cellId(i, j - 1), end_id, visited_arr, path)) return true;
            else path.pop();
        }

        if(this.cell_array[i] && this.cell_array[i][j + 1] && !visited_arr.includes(this.cellId(i, j + 1))) {
            if(this.dfs_util(this.cellId(i, j + 1), end_id, visited_arr, path)) return true;
            else path.pop();
        }

        return false;
    }
};

Graph.prototype.getNeighbours = function(node_id) {
    const [i, j] = this.getCellCoordinates(node_id);
    const d = [[1,0],[-1,0],[0,1],[0,-1]];
    const neighbours = [];

    d.forEach(d_ => {
        let i_ = i + d_[0];
        let j_ = j + d_[1];

        if(i_ >= 0 && i_ < this.rows && j_ >= 0 && j_ < this.columns) neighbours.push(`${i_}_${j_}`);
    })

    return neighbours; 
}

Graph.prototype.bfs = function(start_id, end_id) {
    const visited_arr = [];
    const path = [];


}


export default Graph;