// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXLEAFREADER_CORECLOSEDLISTENERWRAPPER_H
#define ORGAPACHELUCENEINDEXLEAFREADER_CORECLOSEDLISTENERWRAPPER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexIndexReader_ReaderClosedListener-Protocol.h"
#import "OrgApacheLuceneIndexLeafReader_CoreClosedListener-Protocol.h"

@interface OrgApacheLuceneIndexLeafReader_CoreClosedListenerWrapper : NSObject <OrgApacheLuceneIndexIndexReader_ReaderClosedListener>

 {
    id<OrgApacheLuceneIndexLeafReader_CoreClosedListener> *listener_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneIndexLeafReader_CoreClosedListener:(id)arg0 ;
-(void)onCloseWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;


@end


#endif