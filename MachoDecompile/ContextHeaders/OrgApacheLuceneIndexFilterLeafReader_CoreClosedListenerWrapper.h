// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXFILTERLEAFREADER_CORECLOSEDLISTENERWRAPPER_H
#define ORGAPACHELUCENEINDEXFILTERLEAFREADER_CORECLOSEDLISTENERWRAPPER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexLeafReader_CoreClosedListener-Protocol.h"
#import "OrgApacheLuceneIndexLeafReader_CoreClosedListener-Protocol.h"

@interface OrgApacheLuceneIndexFilterLeafReader_CoreClosedListenerWrapper : NSObject <OrgApacheLuceneIndexLeafReader_CoreClosedListener>

 {
    id<OrgApacheLuceneIndexLeafReader_CoreClosedListener> *in_;
    id *thisCoreKey_;
    id *inCoreKey_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneIndexLeafReader_CoreClosedListener:(id)arg0 withId:(id)arg1 withId:(id)arg2 ;
-(void)onCloseWithId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;


@end


#endif