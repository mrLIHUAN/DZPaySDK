# DZPaySDK
支付中心

## 版本要求

iOS SDK 要求 iOS 8.0 及l以上版本

## 接入方法
### 安装
#### 使用 CocoaPods
1. 在 'podfile'添加

   ```
    pod 'DZPaySDK', '~> 1.0.1'
   ```
   默认会包含支付宝、微信、银联
   
2. 运行 `pod install`
3. 从现在开始使用 `.xcworkspace` 打开项目，而不是 `.xcodeproj`
4. 添加 URL Schemes：在 Xcode 中，选择你的工程设置项，选中 "TARGETS" 一栏，在 "Info" 标签栏的 "URL Types" 添加 "URL Schemes"，如果使用微信，填入所注册的微信应用程序 id，如果不使用微信，则自定义，允许英文字母和数字，首字母必须是英文字母，建议起名稍复杂一些，尽量避免与其他程序冲突。

###额外配置

1. iOS 9 以上版本如果需要使用支付宝和微信渠道，需要在 `Info.plist` 添加以下代码：
    ```
    <key>LSApplicationQueriesSchemes</key>
    <array>
        <string>weixin</string>
        <string>wechat</string>
        <string>alipay</string>
        <string>alipayauth</string>
    </array>
    ```
2. iOS 9 限制了 http 协议的访问，如果 App 需要访问 `http://`，需要在 `Info.plist` 添加如下代码：
    ```
    <key>NSAppTransportSecurity</key>
    <dict>
        <key>NSAllowsArbitraryLoads</key>
        <true/>
    </dict>
    ```

    
    
