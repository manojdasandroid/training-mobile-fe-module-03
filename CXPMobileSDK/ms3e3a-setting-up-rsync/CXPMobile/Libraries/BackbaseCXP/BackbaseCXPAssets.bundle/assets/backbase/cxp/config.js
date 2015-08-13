{
	"debug": true,
    "debugContextRoot": null,
    "debugPerformanceEndpointURL": "http://10.10.11.73:9090/",
    "portal": "test",
    "serverURL": "http://mobile-backend1.backbase.com:8080/portalserver",
    "remoteContextRoot": "http://mobile-backend1.backbase.com:8080/portalserver",
    "localModelPath": "backbase/local_model.json",
    "template":{
        "styles": [],
        "scripts": [],
        "extra-libraries": [
            "static/launchpad/launchpad-setup.js",
            "static/launchpad/modules/angular/angular.min.js",
            "static/launchpad/support/requirejs/require.js",
            "static/launchpad/modules/config/requirejs.conf.js",
            "static/launchpad/modules/base/scripts/require-widget.js"
        ],
        "launchpad-dependencies": []
    },
    "behaviourMap": [
        {
            "behaviour": "open-widget-2",
            "target": "/test/behavior-page-1/behavior-page-2"
        },
        {
            "behaviour": "open-widget-3",
            "target": "/test/session2"
        },
        {
            "behaviour": "open-non-existing-wdg",
            "target": "/url-with-slash"
        }
    ],
    "syncedPreferences":{
        "greeting": "yo!"
    }
}
