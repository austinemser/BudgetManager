//
//  Account+Create.m
//  BudgetManager
//
//  Created by Austin Emser on 7/23/13.
//  Copyright (c) 2013 Austin Emser. All rights reserved.
//

#import "Account+Create.h"

@implementation Account (Create)


+ (Account *) accountWithName:(NSString *)name
                  inManagedObjectContext:(NSManagedObjectContext *)context
{
    Account *account = nil;
    
    if(name.length)
    {
        NSFetchRequest *request = [NSFetchRequest fetchRequestWithEntityName:@"Account"];
        request.sortDescriptors = @[[NSSortDescriptor sortDescriptorWithKey:@"name" ascending:YES]];
        request.predicate = [NSPredicate predicateWithFormat:@"name = %@", name];
        
        NSError *error = nil;
        NSArray *matches = [context executeFetchRequest:request error:&error];
        
        if(!matches || [matches count] > 1) {
            //TODO: handle error
        } else if (![matches count]) {
            
        }
    }
    
    
    return account;
}

@end
