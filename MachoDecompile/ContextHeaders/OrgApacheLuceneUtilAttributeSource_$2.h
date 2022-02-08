// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILATTRIBUTESOURCE_$2_H
#define ORGAPACHELUCENEUTILATTRIBUTESOURCE_$2_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilAttributeSource_State.h"
#import "JavaUtilIterator-Protocol.h"

@interface OrgApacheLuceneUtilAttributeSource_$2 : NSObject <JavaUtilIterator>

 {
    OrgApacheLuceneUtilAttributeSource_State *state_;
    OrgApacheLuceneUtilAttributeSource_State *val$initState_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)remove;
-(id)next;
-(BOOL)hasNext;
-(id)initWithOrgApacheLuceneUtilAttributeSource_State:(id)arg0 ;
-(void)dealloc;


@end


#endif