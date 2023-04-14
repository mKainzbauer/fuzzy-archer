Theme for Weewx weather station software.
============
Gauge graphics showing current conditions.

Interactive charts showing conditions over a timespan

MQTT enabled Gauges and charts - live weather data! 
(Live data needs extra extensions and configurations for publishing and subscribing MQTT messages and topics)

Statistics: daily/weewly/monthly/yearly/alltime, highs/lows, ...

Historic data in color coded html tables.

Available in multiple languages. Help wanted! We need help with translations for:

- traditional chinese
- czech
- spanish
- finnish (there isn't even a language file stub yet)
- french
- greek
- italian
- korean (there isn't even a language file stub yet)
- dutch
- thai

New in v4.0:

- Complete and thorough overhaul of the skin, many breaking changes. It is recommended to start over with a fresh install
- This skin used to consist of three skins, now reduced to one
- Localization is now done the WeeWX way
- Less and easier configuration
- Many customizations can now be done by configuration only, no more need to touch the templates
- Day/night background in Live Charts (needs pyephem installed)
- Bug fixes and other enhancements

See it in action with live data (~30s. refresh interval): 
[Das Wetter in Rif](https://www.kainzbauer.net/weather/Rif/)
![Example_Rif](https://kainzbauer.net/example_rif.png)
See it in action (legacy v2.x): [dajda.net](http://dajda.net/)

Gauge with 3 Needles / Markers examples:

![Example 1](https://github.com/danimaciasperea/fuzzy-archer/blob/master/curImpTempGauge.png)

![Example 2](https://github.com/danimaciasperea/fuzzy-archer/blob/master/inTempGauge.png)

Frequently asked questions: [here](https://github.com/brewster76/fuzzy-archer/issues?q=label%3AFAQ+)
