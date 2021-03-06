/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_connection.h>

@protocol OS_nw_endpoint, OS_nw_parameters, OS_nw_endpoint_handler, OS_dispatch_queue;
@class NSObject, NSString;

@interface NWConcrete_nw_connection : NSObject <OS_nw_connection> {

	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_parameters> parameters;
	unsigned long long start_time;
	int state;
	netcore_stats_tcp_report* stats_report;
	int stats_reason;
	unsigned should_report_stats : 1;
	unsigned stats_reported : 1;
	unsigned should_report_generic_stats : 1;
	unsigned generic_stats_reported : 1;
	unsigned initial_payload_sent : 1;
	NSObject*<OS_nw_endpoint_handler> parent_endpoint_handler;
	NSObject*<OS_nw_endpoint_handler> connected_endpoint_handler;
	NSObject*<OS_nw_endpoint_handler> candidate_endpoint_handler;
	NSObject*<OS_nw_endpoint_handler> dry_run_endpoint_handler;
	NSObject*<OS_nw_endpoint_handler> ready_dry_run_endpoint_handler;
	BOOL better_path_available;
	NSObject*<OS_dispatch_queue> client_queue;
	/*^block*/id client_handler;
	/*^block*/id cancel_handler;
	/*^block*/id viability_changed_handler;
	/*^block*/id better_path_available_handler;
	/*^block*/id path_changed_handler;
	/*^block*/id read_close_handler;
	/*^block*/id write_close_handler;
	unsigned adaptive_read_timeout_count;
	/*^block*/id adaptive_read_timeout_handler;
	unsigned adaptive_write_timeout_count;
	/*^block*/id adaptive_write_timeout_handler;
	unsigned excessive_keepalive_count;
	unsigned excessive_keepalive_interval;
	/*^block*/id excessive_keepalive_handler;
	nw_connection_timestamp_s* timestamps;
	unsigned short num_timestamps;
	unsigned short used_timestamps;
	nw_connection_throughput_monitor_s* throughput_monitor;
	/*^block*/id low_throughput_handler;
	CFArrayRef errors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
@end

