class CfgPatches {
    class Cursorless {
        name = "Cursorless";
        author = "Echo (Heyoxe)";
        url = "https://github.com/Heyoxe/A3-Cursorless";
        requiredAddons[] = {};
        requiredVersion = 1.96;
        units[] = {};
        weapons[] = {};
        version = 0.1;
    };
};

class CfgWrapperUI {
	class Cursors {
		class Arrow {
			texture = "\A3\ui_f\data\gui\cfg\cursors\arrow_gs.paa";
			width = 1;
			height = 1;
			hotspotX = 0.1875;
			hotspotY = 0.03125;
            /*
                show: uiNamespace setVariable ["#CursorAlpha", 1];
                hide: uiNamespace setVariable ["#CursorAlpha", 0.002];
            */
			color[] = { 1, 1, 1, "uiNamespace getVariable [""#CursorAlpha"", 1];"};
		};
    };
};