## CHANGELOG

### 7.x-1.0.1

* Updated version of scheduler to version 1.2 (release information available [here](https://drupal.org/node/2032911))
* Updated Rules contrib module version to latest stable release.
* Added helper function to ensure when users enter just a date on Scheduler's publish on or unpublish on fields that a default time value of `00:00:00` is specified. This was done via the `date_popup_pre_validate_alter` function as it was the `date_popup_validate` where the form error was being set.

### 7.x-1.0, Initial Release

* Initial release of ImageX Workflow.
