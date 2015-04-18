//
//  DetailViewController.h
//  test
//
//  Created by 里香 藤原 on 2015/04/11.
//  Copyright (c) 2015年 里香 藤原. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

