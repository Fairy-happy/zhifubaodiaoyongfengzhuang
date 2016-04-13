//
//  Order.h
//  支付宝支付方法封装
//
//  Created by fairy on 16/4/5.
//  Copyright © 2016年 fairy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Order : NSObject
@property (nonatomic, copy) NSString * partner;
@property (nonatomic, copy) NSString * seller;
@property (nonatomic, copy) NSString * tradeNO;
@property (nonatomic, copy) NSString * productName;
@property (nonatomic, copy) NSString * productDescription;
@property (nonatomic, copy) NSString * amount;
@property (nonatomic, copy) NSString * notifyURL;
@property (nonatomic, copy) NSString * service;
@property (nonatomic, copy) NSString * paymentType;
@property (nonatomic, copy) NSString * inputCharset;
@property (nonatomic, copy) NSString * itBPay;
@property (nonatomic, copy) NSString * showUrl;

@property (nonatomic, copy) NSString * rsaDate;//可选
@property (nonatomic, copy) NSString * appID;//可选

@property (nonatomic, readonly) NSMutableDictionary * extraParams;

//遍历构造器
+(id)order;

@end
