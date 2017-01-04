//
//  ViewController.h
//  weichatEye
//
//  Created by chenzhang on 16/2/24.
//  Copyright © 2016年 aimee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
@property(nonatomic, strong) UITableView * weichatTble;
@property (nonatomic, strong) CAShapeLayer *eyeFirstLightLayer;
@property (nonatomic, strong) CAShapeLayer * eyeSecondLightLayer;
@property (nonatomic,strong) CAShapeLayer * eyeballLayer;
@property (nonatomic, strong) CAShapeLayer * topEyesocketLayer;
@property (nonatomic, strong) CAShapeLayer * bottomEyesocketLayer;
@property (nonatomic) CGRect  frame;


@end

