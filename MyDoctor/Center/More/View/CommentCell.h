//
//  CommentCell.h
//  MyDoctor
//
//  Created by wxhl_zy012 on 14-12-2.
//  Copyright (c) 2014年 www.716.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CommentModel.h"
@interface CommentCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIImageView *appImgView;
@property (strong, nonatomic) IBOutlet UILabel *nameLabel;
@property (strong, nonatomic) IBOutlet UILabel *descLabel;
@property (strong, strong)CommentModel *model;
@end
