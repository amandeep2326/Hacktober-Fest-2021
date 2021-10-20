const dotenv = require('dotenv');
dotenv.config();
const express = require('express');
const cors = require('cors');
const mongoose = require('mongoose');
const bodyparser = require('body-parser');

const app = express();

app.use(cors());
app.use(express.json());
app.use(express.urlencoded({ extended: true }));



app.use("/", require("./routes"));

//Default Route
app.get("/", (req, res) => {
    return res.status(200).json({ working: true });
});

app.get('/*', (req, res) => {
    return res.status(404).json({ message: "Route does not exist :(" })
})

const port = process.env.port;
app.listen(port, () => { console.log(`Listening on ${port}`) });