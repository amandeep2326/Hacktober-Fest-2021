const express = require("express");
const router = express.Router();

router.get("/news", async (req, res) => {
    try {
        res.status(200).send("scraper news");
    } catch (error) {
        res.status(500).send("error scraper news");

    }
});


module.exports = router;