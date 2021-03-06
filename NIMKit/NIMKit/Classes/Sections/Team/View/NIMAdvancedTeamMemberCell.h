//
//  NIMAdvancedTeamMemberCell.h
//  NIM
//
//  Created by chris on 15/3/26.
//  Copyright (c) 2015年 Netease. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol NIMAdvancedTeamMemberCellActionDelegate <NSObject>

- (void)didSelectAddOpeartor;

@end


@interface NIMAdvancedTeamMemberCell : UITableViewCell

@property(nonatomic,weak) id<NIMAdvancedTeamMemberCellActionDelegate>delegate;

- (void)rereshWithTeam:(NIMTeam*)team
               members:(NSArray*)members;
@end
