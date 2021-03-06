//
//  DetailViewController.h
//  PhotoWheelPrototype
//
//  Created by Heyin Zhang on 12-5-15.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WheelView.h"
#import "PhotoAlbum.h"
#import "Photo.h"
//@class PhotoAlbum;
@interface DetailViewController : UIViewController 
<UISplitViewControllerDelegate, WheelViewDataSource, 
UIActionSheetDelegate, //Add Listing 12.3 
UINavigationControllerDelegate,//Add Listing 12.4 page 278
UIImagePickerControllerDelegate //Add Listing 12.4 page 278
>
@property (strong, nonatomic) PhotoAlbum *photoAlbum;
@property (strong, nonatomic) IBOutlet WheelView *wheelview;
@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
