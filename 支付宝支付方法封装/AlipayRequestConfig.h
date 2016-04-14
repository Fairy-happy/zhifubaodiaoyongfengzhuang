//
//  AlipayRequestConfig.h
//  支付宝支付方法封装
//
//  Created by fairy on 16/4/5.
//  Copyright © 2016年 fairy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "zhifubaoHeader.h"
typedef void(^PayCompletionBlock)(id result);
@interface AlipayRequestConfig : NSObject
/**
 *  配置请求信息，仅有变化且必要的参数
 *
 *  @param partner            合作者身份ID
 *  @param seller             卖家支付宝账号
 *  @param tradeNO            商户网站唯一订单号
 *  @param productName        商品名称
 *  @param productDescription 商品详情
 *  @param amount             总金额
 *  @param notifyURL          服务器异步通知页面路径
 *  @param itBPay             未付款交易的超时时间
 */

+(void)alipayWithPartner:(NSString *)partner seller:(NSString *)seller tradeNO:(NSString *)tradeNO productName:(NSString *)productName productDescription:(NSString *)productDescription amount:(NSString *)amount notifyURL:(NSString *)notifyURL itBPay:(NSString *)itBPay completionblock:(PayCompletionBlock)completionBlock;


@end
