//
//  Account+Create.h
//  BudgetManager
//
//  Created by Austin Emser on 7/23/13.
//  Copyright (c) 2013 Austin Emser. All rights reserved.
//

#import "Account.h"

@interface Account (Create)

+ (Account *) accountWithName:(NSString *)name
                  inManagedObjectContext:(NSManagedObjectContext *)context;

@end
