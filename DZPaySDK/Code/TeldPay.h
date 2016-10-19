//
//  Wxpay.h
//  WXPay
//
//  Created by apple on 16/3/4.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <UIKit/UIKit.h>
//typedef void (^ResponseBlock)(id response);

@protocol JavaScriptObjectiveCDelegate <JSExport>
//
//-(void)charge:;(NSString *)params

/**此方法已弃用*/
/**
 *  @author 李欢, 16-03-11 09:03:27
 *
 *  当选择支付渠道时，JS通过调用AppInstalled来检查该对应的客户端是否存在
 *
 *  @return parems(JS通过调用此方法传过来的参数)
 */
//判断是否存在支付客户端
-(void)AppInstalled:(NSString *)parems;

/**此方法已弃用*/
/**
 *  @author 李欢, 16-03-11 09:03:20
 *
 *  当点击立即支付时，JS通过此方法来传递对应的支付渠道的订单参数
 *
 *  @return params(传递的是订单参数)
 */
//传递JSON
-(void)Charge:(NSString *)params;

@end


@interface TeldPaySDK : NSObject <JavaScriptObjectiveCDelegate>
@property(nonatomic,weak)JSContext *jsContext;
@property(nonatomic,weak)UIWebView *webView;
@end



@interface TeldPay : NSObject
/**
 * 判断微信客户端是否存在
 */
+(BOOL)WXAppInstalled;

/**
 *  @author 李欢, 16-03-11 09:03:06
 *
 *  判断支付宝客户端是否存在
 *
 *  @param NSString
 *
 *  @return
 */
+(BOOL)ALIisLogin;
/**
 * 微信支付调用此方法
 */
+ (NSString *)wxPayWithProductName:(NSDictionary*)dic;

/**
 * 支付宝支付调用此方法
 */
+ (NSString *)aliPayWithProductname:(NSString*)orderString withAppappScheme:(NSString*)appScheme;
/**
 * 银联支付
 */
+ (void)UNPayWithHTML:(NSString*)HTML;

@end
