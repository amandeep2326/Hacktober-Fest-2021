const dotenv = require('dotenv');
dotenv.config();
const express = require('express');
const cors = require('cors');
const mongoose = require('mongoose');
const bodyparser = require('body-parser');

const app = express();

app.use(cors());
app.use(express.json());

app.get('/', async (req, res) => {
    console.log(req.body);
    res.status(200).json({ data: req.body });
});


const port = process.env.port;
app.listen(port, () => { console.log(`Listening on ${port}`) });