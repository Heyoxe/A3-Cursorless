class CfgPatches {
    class Cursorless {
        name = "Cursorless";
        author = "Echo (Heyoxe)";
        url = "https://github.com/Heyoxe/A3-Cursorless";
        requiredAddons[] = { "A3_Ui_F" };
        requiredVersion = 1.96;
        units[] = {};
        weapons[] = {};
        version = 0.1;
    };
};

class CfgFunctions {
    class Cursor {
        class Main {
            file = "\e\cursorless\addons\main";
            class hide {};
            class show {};
            class isShown {};
        };
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
			color[] = { 1, 1, 1, "uiNamespace getVariable [""#CursorAlpha"", 1];"};
		};
    };
};