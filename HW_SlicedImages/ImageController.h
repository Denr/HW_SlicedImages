//
//  ImageViewContr.h
//  HW_SlicedImages
//
//  Created by Admin on 5/18/15.
//  Copyright (c) 2015 ITIS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageController : UIViewController
{
    CGFloat rowsCount;
    CGFloat columnsCount;
    CGFloat elemWidth;
    CGFloat elemHieght;
    NSArray *imagesArray;
}

@property (nonatomic, strong) NSDictionary *dict;
@property (weak, nonatomic) IBOutlet UIView *mainView;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;

@end
