
Pod::Spec.new do |s|

  s.name         = "AnyChatCoreSDK"
  s.version      = "1.0.1"
  s.summary      = "A short description of AnyChatCoreSDK."
  s.homepage     = "https://github.com/coderzzz/AnyChatCoreSDK"
  s.license      = "MIT"
  s.author       = "coderzzz"
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/coderzzz/AnyChatCoreSDK.git", :tag => spec.version.to_s }
  s.source_files  = "sdk/**/*.{h}"
  s.frameworks = 'CoreMedia', 'AudioToolbox', 'AVFoundation', 'QuartzCore', 'CoreVideo', 'CoreAudio'
  s.libraries = 'c++','stdc++.6.0.9'
  s.requires_arc = true
  spec.vendored_libraries = 'sdk/**/*.a'
  spec.xcconfig     = {'OTHER_LDFLAGS' => '-ObjC'}

end