//
//  QRScanView.h
//  Kiwi
//
//  Created by Ray on 2018/5/31.
//

#import <UIKit/UIKit.h>


@class QRScanViewConfig;

@class RACSignal;
@class RACTuple;

@interface QRScanView : UIView

+ (QRScanView *)frame:(CGRect)frame config:(QRScanViewConfig *)config;

/** 是否需要开启手电筒 */
@property (nonatomic, strong)RACSignal *needFlash;

@end


@interface QRScanViewConfig : NSObject

+ (QRScanViewConfig *)config;

/**  */
@property (nonatomic, strong)UIColor *maskBoxBoardColor;
@property (nonatomic, assign)CGFloat maskBoxBoardWidth;

/**  */
@property (nonatomic, strong)UIColor *lineColor;
/**  */
@property (nonatomic, assign)CGFloat lineWidth;
/**  */
@property (nonatomic, assign)CGFloat lineLength;

/** 扫描线 */
@property (nonatomic, strong)UIImage *scanLineImage;
/** 是否需要扫描线 */
@property (nonatomic, assign)BOOL scanLine_display;

/** (轻触照亮，轻触关闭) */
@property (nonatomic, strong)RACTuple *flashNotice;

@end
