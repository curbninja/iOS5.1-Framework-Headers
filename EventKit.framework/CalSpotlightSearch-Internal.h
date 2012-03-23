/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/CalSpotlightSearch.h>

@interface CalSpotlightSearch (Internal)
- (void)_deleteSpotlightEventsContext:(struct CalEventSpotlightContext *)arg1;
- (struct CalEventSpotlightContext *)_createSpotlightEventsContext;
- (void)calculateSearchWindow:(struct CalEventSpotlightContext *)arg1;
- (void)_getSpotlightEvents:(struct CalEventSpotlightContext *)arg1 callback:(id)arg2;
- (void)_getLocationSearchResults:(struct CalLocationIdsSearchContext *)arg1;
- (void)_addMatchedLocationIds:(struct __CFArray *)arg1;
- (void)_deleteLocationIdsSearchContext:(struct CalLocationIdsSearchContext *)arg1;
- (struct CalLocationIdsSearchContext *)_createLocationIdsSearchContext;
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext *)arg1;
- (struct CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext *)arg1;
- (void)_addMatchedParticipantIds:(struct __CFArray *)arg1;
- (void)_startLoadingResults:(id)arg1;
- (id)initWithDatabase:(struct CalDatabase *)arg1 titleString:(id)arg2 locationString:(id)arg3 descriptionString:(id)arg4 participantString:(id)arg5 dataSink:(id)arg6 queryCache:(struct __CFDictionary *)arg7;
@end
