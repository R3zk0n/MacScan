// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILWEAKIDENTITYMAP_$1_H
#define ORGAPACHELUCENEUTILWEAKIDENTITYMAP_$1_H


#import <Foundation/Foundation.h>

#import "JavaUtilIterator-Protocol.h"
#import "JavaUtilIterator-Protocol.h"

@interface OrgApacheLuceneUtilWeakIdentityMap_$1 : NSObject <JavaUtilIterator>

 {
    id *next_;
    BOOL nextIsSet_;
    id<JavaUtilIterator> *val$iterator_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(BOOL)setNext;
-(id)initWithJavaUtilIterator:(id)arg0 ;
-(void)dealloc;


@end


#endif