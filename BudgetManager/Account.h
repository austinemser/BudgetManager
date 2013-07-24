//
//  Account.h
//  BudgetManager
//
//  Created by Austin Emser on 7/23/13.
//  Copyright (c) 2013 Austin Emser. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class PayableTransaction, ReceivableTransaction;

@interface Account : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDecimalNumber * amount;
@property (nonatomic, retain) NSSet *receivables;
@property (nonatomic, retain) NSSet *payables;
@end

@interface Account (CoreDataGeneratedAccessors)

- (void)addReceivablesObject:(ReceivableTransaction *)value;
- (void)removeReceivablesObject:(ReceivableTransaction *)value;
- (void)addReceivables:(NSSet *)values;
- (void)removeReceivables:(NSSet *)values;

- (void)addPayablesObject:(PayableTransaction *)value;
- (void)removePayablesObject:(PayableTransaction *)value;
- (void)addPayables:(NSSet *)values;
- (void)removePayables:(NSSet *)values;

@end
