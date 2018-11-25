//
//  UABaseNavigationController.h
//  Archermind_HW_UAlbum
//
//  Created by Yana on 2018/11/25.
//  Copyright © 2018年 Archermind. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UABaseNavigationController : UINavigationController

/*!
 *  返回到指定的类视图
 *
 *  @param ClassName 类名
 *  @param animated  是否动画
 */
-(BOOL)popToAppointViewController:(NSString *)ClassName animated:(BOOL)animated;

-(instancetype)getCurrentViewControllerClass:(NSString *)ClassName;


@end

NS_ASSUME_NONNULL_END
