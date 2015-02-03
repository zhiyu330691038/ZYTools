
Pod::Spec.new do |s|

  s.name         = "ZYTools"
  s.version      = "1.0.1"
  s.summary      = "A short desfdasfdsacription of ZYTools."

  s.description  = <<-DESC
                   A longer description of ZYTools in Markdown format.

                   * Think: Why did you write this? What is the focus? What does it do?
                   * CocoaPods will be using this to generate tags, and improve search results.
                   * Try to keep it short, snappy and to the point.
                   * Finally, don't worry about the indent, CocoaPods strips it!
                   DESC

  s.homepage     = "https://github.com/zhiyu330691038/ZYTools"


  s.license      = "MIT"




  s.author             = { "Zhi Kuiyu" => "zky_416@sina.com" }


  s.platform     = :ios
  s.platform     = :ios, "6.0"

  s.ios.deployment_target = "5.0"
  s.osx.deployment_target = "10.7"




s.source       = { :git => "/Users/zky/Desktop/ZYTools" , :tag => "1.0.1"}

  s.source_files  = "**/*.{h,m}"
  s.exclude_files = "Classes/Exclude"

  s.public_header_files = "**/*.h"


  s.requires_arc = true

  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "JSONKit", "~> 1.4"

end
