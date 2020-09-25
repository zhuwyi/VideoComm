//
//  ACBaseViewController.h
//  VideoComm
//


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ACBaseViewController : UIViewController

//导航栏左键返回  重写可自定义返回逻辑
- (void)navLeftClick;

//导航栏是否透明  默认NO
- (BOOL)navBarTranslucent;

-(NSString *)zidianzhuangjson:(NSDictionary *)jsondic;

-(NSDictionary *)jsonzhuanzidianmap:(NSString *)json;



@end

NS_ASSUME_NONNULL_END
