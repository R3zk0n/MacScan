// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONSORTEDINTSET_H
#define ORGAPACHELUCENEUTILAUTOMATONSORTEDINTSET_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneUtilAutomatonSortedIntSet : NSObject {
    IOSIntArray *values_;
    IOSIntArray *counts_;
    int upto_;
    int state_;
    int hashCode_;
    id<JavaUtilMap> *map_;
    BOOL useTreeMap_;
}




-(id)initWithInt:(int)arg0 ;
-(void)incrWithInt:(int)arg0 ;
-(void)decrWithInt:(int)arg0 ;
-(void)computeHash;
-(id)freezeWithInt:(int)arg0 ;
-(NSUInteger)hash;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif