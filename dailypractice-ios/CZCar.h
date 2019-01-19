//
//  CZCar.h
//  UiTableView
//
//  Created by 曹延昌 on 2019/1/7.
//  Copyright © 2019年 曹延昌. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CZCar : NSObject
@property(nonatomic,copy) NSString *icon;
@property(nonatomic,copy) NSString *name;

-(instancetype)initWithDict:(NSDictionary *)dict;
+(instancetype)carWithDict:(NSDictionary *)dict;

@end
