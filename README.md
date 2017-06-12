## Microservices

Microservices is a suite of Drupal features (prefixed by ms_) which have been created in the context of the
Humanitarian Hub and can be reused by other entities to easily integrate taxonomies which are pulled and
synchronized from sites which belong to the Humanitarian Hub.

More documentation concerning the full suite of modules can be found [here](https://github.com/un-ocha/ms_core).

This module provides a local taxonomy (ms_themes) which content is synchronized with the list of themes available in [https://www.humanitarianresponse.info/api/v1.0/themes](https://www.humanitarianresponse.info/api/v1.0/themes). The Humanitarianresponse ID of the themes is stored locally and used as a unique key to update the terms in the local taxonomy with the terms which come from [https://www.humanitarianresponse.info/api/v1.0/themes](https://www.humanitarianresponse.info/api/v1.0/themes).
