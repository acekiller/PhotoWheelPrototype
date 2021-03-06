//
//  WheelView.h
//  PhotoWheelPrototype
//
//  Created by Heyin Zhang on 12-5-17.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol WheelViewDataSource;
@protocol WheelViewDelegate;
@class WheelViewCell;
typedef enum {
    WheelViewStyleWheel,
    WheelViewStyleCarousel,
} WheelViewStyle;


@interface WheelView : UIView
@property (nonatomic, assign) CGFloat angleOffset;
@property (nonatomic, strong) IBOutlet id<WheelViewDataSource> dataSource;
@property (nonatomic, strong) IBOutlet id<WheelViewDelegate> delegate;
@property (nonatomic, assign) WheelViewStyle style;
@property (nonatomic, assign) NSInteger selectedIndex; // 1
- (id)dequeueReusableCell; // 2
- (void)reloadData; // 3
- (WheelViewCell *)cellAtIndex:(NSInteger)index; // 4
@end
@protocol WheelViewDataSource <NSObject>
@required
- (NSInteger)wheelViewNumberOfCells:(WheelView *)wheelView;
- (WheelViewCell *)wheelView:(WheelView *)wheelView cellAtIndex:(NSInteger)index;
@optional
- (void)wheelView:(WheelView *)wheelView
didSelectCellAtIndex:(NSInteger)index; // 5
@end
@protocol WheelViewDelegate <NSObject> // 6
@optional
- (NSInteger)wheelViewNumberOfVisibleCells:(WheelView *)wheelView;
@end
@interface WheelViewCell : UIView
@end
