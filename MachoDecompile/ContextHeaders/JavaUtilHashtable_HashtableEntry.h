// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILHASHTABLE_HASHTABLEENTRY_H
#define JAVAUTILHASHTABLE_HASHTABLEENTRY_H


#import <Foundation/Foundation.h>

#import "JavaUtilHashtable_HashtableEntry.h"
#import "JavaUtilMap_Entry-Protocol.h"

@interface JavaUtilHashtable_HashtableEntry : NSObject <JavaUtilMap_Entry>

 {
    id *key_;
    id *value_;
    int hash__;
    JavaUtilHashtable_HashtableEntry *next_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithId:(id)arg0 withId:(id)arg1 withInt:(int)arg2 withJavaUtilHashtable_HashtableEntry:(id)arg3 ;
-(id)getKey;
-(id)getValue;
-(id)setValueWithId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif