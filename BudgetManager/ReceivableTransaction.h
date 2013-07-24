//
//  ReceivableTransaction.h
//  BudgetManager
//
//  Created by Austin Emser on 7/23/13.
//  Copyright (c) 2013 Austin Emser. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Account;

@interface ReceivableTransaction : NSManagedObject

@property (nonatomic, retain) NSDecimalNumber * amount;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) Account *account;

@end
