/* ( no this CONTENT.h file wasn't written by an LLM, i just need somewhere to remember shit )

    renderer/
        imgui/*             > imgui library shit
        interface.(c/h)pp   > contains the interface code
        hooks.(c/h)pp       > SDL3 / Vulkan hooks for the (imgui)
                              interface and Drawing/DrawingImmediate

    execution/
        luau/*              > luau
        bytecode.(c/h)pp    > bytecode fixer upper (if needed.)
        patterns.h          > patterns for function offsets
        sunc.(c/h)pp        > sUNC definitions
        core.cpp            > execution core
        hooks.(c/h)pp       > another hooks file, but for execution now
        
    assets/ [ this is the reason why the standard was set to c++26 ]
        ascii.h             > just contains yoink in a figlet font (REBEL)
        logo.png            > the logo

    main.cpp                > exists for stupid reasons lmao
*/