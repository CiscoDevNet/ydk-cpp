#ifndef _CISCO_IOS_XE_NATIVE_9_
#define _CISCO_IOS_XE_NATIVE_9_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_6.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Ip::Msdp : public ydk::Entity
{
    public:
        Msdp();
        ~Msdp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cache_rejected_sa; //type: uint32
        ydk::YLeaf cache_sa_state; //type: empty
        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf rpf; //type: Rpf
        ydk::YLeaf timer; //type: uint8
        class Peer; //type: Native::Ip::Msdp::Peer
        class DefaultPeer; //type: Native::Ip::Msdp::DefaultPeer
        class Description; //type: Native::Ip::Msdp::Description
        class FilterSaRequest; //type: Native::Ip::Msdp::FilterSaRequest
        class Keepalive; //type: Native::Ip::Msdp::Keepalive
        class MeshGroup; //type: Native::Ip::Msdp::MeshGroup
        class Password; //type: Native::Ip::Msdp::Password
        class Redistribute; //type: Native::Ip::Msdp::Redistribute
        class SaFilter; //type: Native::Ip::Msdp::SaFilter
        class SaLimit; //type: Native::Ip::Msdp::SaLimit
        class Shutdown; //type: Native::Ip::Msdp::Shutdown
        class TtlThreshold; //type: Native::Ip::Msdp::TtlThreshold
        class Vrf; //type: Native::Ip::Msdp::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::DefaultPeer> default_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Description> description;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::FilterSaRequest> filter_sa_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::MeshGroup> mesh_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::SaFilter> sa_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::SaLimit> sa_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Shutdown> shutdown;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::TtlThreshold> ttl_threshold;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf> > vrf;
                class Rpf;

}; // Native::Ip::Msdp


class Native::Ip::Msdp::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf connect_source; //type: string
        ydk::YLeaf remote_as; //type: uint16

}; // Native::Ip::Msdp::Peer


class Native::Ip::Msdp::DefaultPeer : public ydk::Entity
{
    public:
        DefaultPeer();
        ~DefaultPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::Ip::Msdp::DefaultPeer


class Native::Ip::Msdp::Description : public ydk::Entity
{
    public:
        Description();
        ~Description();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf description; //type: string

}; // Native::Ip::Msdp::Description


class Native::Ip::Msdp::FilterSaRequest : public ydk::Entity
{
    public:
        FilterSaRequest();
        ~FilterSaRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string

}; // Native::Ip::Msdp::FilterSaRequest


class Native::Ip::Msdp::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf keepalive; //type: uint8
        ydk::YLeaf max_wait; //type: uint8

}; // Native::Ip::Msdp::Keepalive


class Native::Ip::Msdp::MeshGroup : public ydk::Entity
{
    public:
        MeshGroup();
        ~MeshGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf addr; //type: string

}; // Native::Ip::Msdp::MeshGroup


class Native::Ip::Msdp::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Peer; //type: Native::Ip::Msdp::Password::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Password::Peer> peer;
        
}; // Native::Ip::Msdp::Password


class Native::Ip::Msdp::Password::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf encryption; //type: uint8
        ydk::YLeaf password; //type: string

}; // Native::Ip::Msdp::Password::Peer


class Native::Ip::Msdp::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf route_map; //type: string

}; // Native::Ip::Msdp::Redistribute


class Native::Ip::Msdp::SaFilter : public ydk::Entity
{
    public:
        SaFilter();
        ~SaFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class In; //type: Native::Ip::Msdp::SaFilter::In
        class Out; //type: Native::Ip::Msdp::SaFilter::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::SaFilter::In> in;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::SaFilter::Out> out;
        
}; // Native::Ip::Msdp::SaFilter


class Native::Ip::Msdp::SaFilter::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rp_list; //type: one of uint16, string
        ydk::YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::SaFilter::In


class Native::Ip::Msdp::SaFilter::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rp_list; //type: one of uint16, string
        ydk::YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::SaFilter::Out


class Native::Ip::Msdp::SaLimit : public ydk::Entity
{
    public:
        SaLimit();
        ~SaLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf limit; //type: uint32

}; // Native::Ip::Msdp::SaLimit


class Native::Ip::Msdp::Shutdown : public ydk::Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string

}; // Native::Ip::Msdp::Shutdown


class Native::Ip::Msdp::TtlThreshold : public ydk::Entity
{
    public:
        TtlThreshold();
        ~TtlThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf threshold; //type: uint8

}; // Native::Ip::Msdp::TtlThreshold


class Native::Ip::Msdp::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf cache_rejected_sa; //type: uint32
        ydk::YLeaf cache_sa_state; //type: empty
        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf rpf; //type: Rpf
        ydk::YLeaf timer; //type: uint8
        class Peer; //type: Native::Ip::Msdp::Vrf::Peer
        class DefaultPeer; //type: Native::Ip::Msdp::Vrf::DefaultPeer
        class Description; //type: Native::Ip::Msdp::Vrf::Description
        class FilterSaRequest; //type: Native::Ip::Msdp::Vrf::FilterSaRequest
        class Keepalive; //type: Native::Ip::Msdp::Vrf::Keepalive
        class MeshGroup; //type: Native::Ip::Msdp::Vrf::MeshGroup
        class Password; //type: Native::Ip::Msdp::Vrf::Password
        class Redistribute; //type: Native::Ip::Msdp::Vrf::Redistribute
        class SaFilter; //type: Native::Ip::Msdp::Vrf::SaFilter
        class SaLimit; //type: Native::Ip::Msdp::Vrf::SaLimit
        class Shutdown; //type: Native::Ip::Msdp::Vrf::Shutdown
        class TtlThreshold; //type: Native::Ip::Msdp::Vrf::TtlThreshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::DefaultPeer> default_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Description> description;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::FilterSaRequest> filter_sa_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::MeshGroup> mesh_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaFilter> sa_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaLimit> sa_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Shutdown> shutdown;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::TtlThreshold> ttl_threshold;
                class Rpf;

}; // Native::Ip::Msdp::Vrf


class Native::Ip::Msdp::Vrf::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf connect_source; //type: string
        ydk::YLeaf remote_as; //type: uint16

}; // Native::Ip::Msdp::Vrf::Peer


class Native::Ip::Msdp::Vrf::DefaultPeer : public ydk::Entity
{
    public:
        DefaultPeer();
        ~DefaultPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::Ip::Msdp::Vrf::DefaultPeer


class Native::Ip::Msdp::Vrf::Description : public ydk::Entity
{
    public:
        Description();
        ~Description();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf description; //type: string

}; // Native::Ip::Msdp::Vrf::Description


class Native::Ip::Msdp::Vrf::FilterSaRequest : public ydk::Entity
{
    public:
        FilterSaRequest();
        ~FilterSaRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string

}; // Native::Ip::Msdp::Vrf::FilterSaRequest


class Native::Ip::Msdp::Vrf::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf keepalive; //type: uint8
        ydk::YLeaf max_wait; //type: uint8

}; // Native::Ip::Msdp::Vrf::Keepalive


class Native::Ip::Msdp::Vrf::MeshGroup : public ydk::Entity
{
    public:
        MeshGroup();
        ~MeshGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf addr; //type: string

}; // Native::Ip::Msdp::Vrf::MeshGroup


class Native::Ip::Msdp::Vrf::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: Native::Ip::Msdp::Vrf::Password::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Password::Peer> peer;
        
}; // Native::Ip::Msdp::Vrf::Password


class Native::Ip::Msdp::Vrf::Password::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf encryption; //type: uint8
        ydk::YLeaf password; //type: string

}; // Native::Ip::Msdp::Vrf::Password::Peer


class Native::Ip::Msdp::Vrf::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf route_map; //type: string

}; // Native::Ip::Msdp::Vrf::Redistribute


class Native::Ip::Msdp::Vrf::SaFilter : public ydk::Entity
{
    public:
        SaFilter();
        ~SaFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Native::Ip::Msdp::Vrf::SaFilter::In
        class Out; //type: Native::Ip::Msdp::Vrf::SaFilter::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaFilter::In> in;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaFilter::Out> out;
        
}; // Native::Ip::Msdp::Vrf::SaFilter


class Native::Ip::Msdp::Vrf::SaFilter::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rp_list; //type: one of uint16, string
        ydk::YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::Vrf::SaFilter::In


class Native::Ip::Msdp::Vrf::SaFilter::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rp_list; //type: one of uint16, string
        ydk::YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::Vrf::SaFilter::Out


class Native::Ip::Msdp::Vrf::SaLimit : public ydk::Entity
{
    public:
        SaLimit();
        ~SaLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf limit; //type: uint32

}; // Native::Ip::Msdp::Vrf::SaLimit


class Native::Ip::Msdp::Vrf::Shutdown : public ydk::Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string

}; // Native::Ip::Msdp::Vrf::Shutdown


class Native::Ip::Msdp::Vrf::TtlThreshold : public ydk::Entity
{
    public:
        TtlThreshold();
        ~TtlThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf threshold; //type: uint8

}; // Native::Ip::Msdp::Vrf::TtlThreshold


class Native::Ip::McrConf : public ydk::Entity
{
    public:
        McrConf();
        ~McrConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf multicast_routing; //type: empty

}; // Native::Ip::McrConf


class Native::Ip::MulticastRouting : public ydk::Entity
{
    public:
        MulticastRouting();
        ~MulticastRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf distributed; //type: empty
        class Vrf; //type: Native::Ip::MulticastRouting::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::MulticastRouting::Vrf> > vrf;
        
}; // Native::Ip::MulticastRouting


class Native::Ip::MulticastRouting::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf distributed; //type: empty

}; // Native::Ip::MulticastRouting::Vrf


class Native::Ip::Mroute : public ydk::Entity
{
    public:
        Mroute();
        ~Mroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf subnet_mask; //type: string
        ydk::YLeaf tunnel; //type: int32

}; // Native::Ip::Mroute


class Native::Ip::Nat : public ydk::Entity
{
    public:
        Nat();
        ~Nat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Pool; //type: Native::Ip::Nat::Pool
        class Inside; //type: Native::Ip::Nat::Inside
        class Outside; //type: Native::Ip::Nat::Outside

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Pool> > pool;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside> inside;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Outside> outside;
        
}; // Native::Ip::Nat


class Native::Ip::Nat::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf start_address; //type: string
        ydk::YLeaf end_address; //type: string
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf accounting; //type: string
        ydk::YLeaf arp_ping; //type: empty
        ydk::YLeaf type; //type: Type
        ydk::YLeaf add_route; //type: empty
        class Type;

}; // Native::Ip::Nat::Pool


class Native::Ip::Nat::Inside : public ydk::Entity
{
    public:
        Inside();
        ~Inside();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Source; //type: Native::Ip::Nat::Inside::Source
        class Destination; //type: Native::Ip::Nat::Inside::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Destination> destination;
        
}; // Native::Ip::Nat::Inside


class Native::Ip::Nat::Inside::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class List; //type: Native::Ip::Nat::Inside::Source::List
        class RouteMap; //type: Native::Ip::Nat::Inside::Source::RouteMap
        class Static_; //type: Native::Ip::Nat::Inside::Source::Static_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List> > list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap> > route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_> static_;
        
}; // Native::Ip::Nat::Inside::Source


class Native::Ip::Nat::Inside::Source::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: one of uint16, string
        ydk::YLeaf pool; //type: string
        ydk::YLeaf redundancy; //type: uint8
        ydk::YLeaf mapping_id; //type: uint32
        ydk::YLeaf no_payload; //type: empty
        ydk::YLeaf reversible; //type: empty
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf match_in_vrf; //type: empty
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf oer; //type: empty
        class Interface; //type: Native::Ip::Nat::Inside::Source::List::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::Interface> interface;
        
}; // Native::Ip::Nat::Inside::Source::List


class Native::Ip::Nat::Inside::Source::List::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Nat::Inside::Source::List::Interface


class Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface


class Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface


class Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface


class Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface


class Native::Ip::Nat::Inside::Source::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf route_map_name; //type: string
        class Pool; //type: Native::Ip::Nat::Inside::Source::RouteMap::Pool
        class Interface; //type: Native::Ip::Nat::Inside::Source::RouteMap::Interface
        class Oer; //type: Native::Ip::Nat::Inside::Source::RouteMap::Oer
        class Overload; //type: Native::Ip::Nat::Inside::Source::RouteMap::Overload
        class Vrf; //type: Native::Ip::Nat::Inside::Source::RouteMap::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Pool> pool;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Oer> oer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Overload> overload;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Vrf> > vrf;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap


class Native::Ip::Nat::Inside::Source::RouteMap::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf match_in_vrf; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::Pool


class Native::Ip::Nat::Inside::Source::RouteMap::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap::Interface


class Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface


class Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface


class Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface


class Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface


class Native::Ip::Nat::Inside::Source::RouteMap::Oer : public ydk::Entity
{
    public:
        Oer();
        ~Oer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::Oer


class Native::Ip::Nat::Inside::Source::RouteMap::Overload : public ydk::Entity
{
    public:
        Overload();
        ~Overload();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::Overload


class Native::Ip::Nat::Inside::Source::RouteMap::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Oer; //type: Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer
        class Overload; //type: Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer> oer; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload> overload; // presence node
        
}; // Native::Ip::Nat::Inside::Source::RouteMap::Vrf


class Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer : public ydk::Entity
{
    public:
        Oer();
        ~Oer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf overload; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer


class Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload : public ydk::Entity
{
    public:
        Overload();
        ~Overload();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oer; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload


class Native::Ip::Nat::Inside::Source::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NatStaticTransportList; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList
        class NatStaticTransportInterfaceList; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList> > nat_static_transport_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList> > nat_static_transport_interface_list;
        
}; // Native::Ip::Nat::Inside::Source::Static_


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList : public ydk::Entity
{
    public:
        NatStaticTransportList();
        ~NatStaticTransportList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf local_ip; //type: string
        ydk::YLeaf global_ip; //type: string
        ydk::YLeaf proto; //type: Proto
        ydk::YLeaf network; //type: empty
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf mask; //type: string
        ydk::YLeaf global_port; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf extendable; //type: empty
        ydk::YLeaf no_alias; //type: empty
        ydk::YLeaf no_payload; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf reversible; //type: empty
        ydk::YLeaf redundancy; //type: one of uint8, string
        ydk::YLeaf mapping_id; //type: uint32
        ydk::YLeaf match_in_vrf; //type: empty
        ydk::YLeaf forced; //type: empty
        ydk::YLeaf overload; //type: empty
        class Proto;

}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList : public ydk::Entity
{
    public:
        NatStaticTransportInterfaceList();
        ~NatStaticTransportInterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf proto; //type: Proto
        ydk::YLeaf local_ip; //type: string
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf global_port; //type: uint16
        class Interface; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface> interface;
                class Proto;

}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMSubinterface


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LISPSubinterface


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface


class Native::Ip::Nat::Inside::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class List; //type: Native::Ip::Nat::Inside::Destination::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Destination::List> > list;
        
}; // Native::Ip::Nat::Inside::Destination


class Native::Ip::Nat::Inside::Destination::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: one of uint16, string
        ydk::YLeaf pool; //type: string
        ydk::YLeaf redundancy; //type: uint8
        ydk::YLeaf mapping_id; //type: uint32

}; // Native::Ip::Nat::Inside::Destination::List


class Native::Ip::Nat::Outside : public ydk::Entity
{
    public:
        Outside();
        ~Outside();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Source; //type: Native::Ip::Nat::Outside::Source
        class List; //type: Native::Ip::Nat::Outside::List
        class RouteMap; //type: Native::Ip::Nat::Outside::RouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Outside::Source> source;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Outside::List> > list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Outside::RouteMap> > route_map;
        
}; // Native::Ip::Nat::Outside


class Native::Ip::Nat::Outside::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Static_; //type: Native::Ip::Nat::Outside::Source::Static_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Outside::Source::Static_> static_;
        
}; // Native::Ip::Nat::Outside::Source


class Native::Ip::Nat::Outside::Source::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NatStaticTransportList; //type: Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList> > nat_static_transport_list;
        
}; // Native::Ip::Nat::Outside::Source::Static_


class Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList : public ydk::Entity
{
    public:
        NatStaticTransportList();
        ~NatStaticTransportList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf global_ip; //type: string
        ydk::YLeaf local_ip; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf extendable; //type: empty
        ydk::YLeaf no_payload; //type: empty

}; // Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList


class Native::Ip::Nat::Outside::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: one of uint16, string
        ydk::YLeaf pool; //type: string
        ydk::YLeaf mapping_id; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf add_route; //type: empty

}; // Native::Ip::Nat::Outside::List


class Native::Ip::Nat::Outside::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf pool; //type: string
        ydk::YLeaf mapping_id; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf add_route; //type: empty

}; // Native::Ip::Nat::Outside::RouteMap


class Native::Ip::Nbar : public ydk::Entity
{
    public:
        Nbar();
        ~Nbar();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Attribute; //type: Native::Ip::Nbar::Attribute
        class AttributeMap; //type: Native::Ip::Nbar::AttributeMap
        class AttributeSet; //type: Native::Ip::Nbar::AttributeSet
        class Classification; //type: Native::Ip::Nbar::Classification
        class Custom; //type: Native::Ip::Nbar::Custom
        class ProtocolPack; //type: Native::Ip::Nbar::ProtocolPack

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute> attribute;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::AttributeMap> > attribute_map;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::AttributeSet> > attribute_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification> classification;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom> > custom;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::ProtocolPack> protocol_pack;
        
}; // Native::Ip::Nbar


class Native::Ip::Nbar::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ApplicationGroup; //type: Native::Ip::Nbar::Attribute::ApplicationGroup
        class ApplicationSet; //type: Native::Ip::Nbar::Attribute::ApplicationSet
        class Category; //type: Native::Ip::Nbar::Attribute::Category
        class SubCategory; //type: Native::Ip::Nbar::Attribute::SubCategory

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationGroup> application_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationSet> application_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::Category> category;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::SubCategory> sub_category;
        
}; // Native::Ip::Nbar::Attribute


class Native::Ip::Nbar::Attribute::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Custom; //type: Native::Ip::Nbar::Attribute::ApplicationGroup::Custom

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationGroup::Custom> > custom;
        
}; // Native::Ip::Nbar::Attribute::ApplicationGroup


class Native::Ip::Nbar::Attribute::ApplicationGroup::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::ApplicationGroup::Custom


class Native::Ip::Nbar::Attribute::ApplicationSet : public ydk::Entity
{
    public:
        ApplicationSet();
        ~ApplicationSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Custom; //type: Native::Ip::Nbar::Attribute::ApplicationSet::Custom

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationSet::Custom> > custom;
        
}; // Native::Ip::Nbar::Attribute::ApplicationSet


class Native::Ip::Nbar::Attribute::ApplicationSet::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::ApplicationSet::Custom


class Native::Ip::Nbar::Attribute::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Custom; //type: Native::Ip::Nbar::Attribute::Category::Custom

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::Category::Custom> > custom;
        
}; // Native::Ip::Nbar::Attribute::Category


class Native::Ip::Nbar::Attribute::Category::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::Category::Custom


class Native::Ip::Nbar::Attribute::SubCategory : public ydk::Entity
{
    public:
        SubCategory();
        ~SubCategory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Custom; //type: Native::Ip::Nbar::Attribute::SubCategory::Custom

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::SubCategory::Custom> > custom;
        
}; // Native::Ip::Nbar::Attribute::SubCategory


class Native::Ip::Nbar::Attribute::SubCategory::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::SubCategory::Custom


class Native::Ip::Nbar::AttributeMap : public ydk::Entity
{
    public:
        AttributeMap();
        ~AttributeMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class Attribute; //type: Native::Ip::Nbar::AttributeMap::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::AttributeMap::Attribute> attribute;
        
}; // Native::Ip::Nbar::AttributeMap


class Native::Ip::Nbar::AttributeMap::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_group; //type: string
        ydk::YLeaf application_set; //type: string
        ydk::YLeaf business_relevance; //type: string
        ydk::YLeaf category; //type: string
        ydk::YLeaf encrypted; //type: string
        ydk::YLeaf sub_category; //type: string
        ydk::YLeaf traffic_class; //type: string
        ydk::YLeaf tunnel; //type: string

}; // Native::Ip::Nbar::AttributeMap::Attribute


class Native::Ip::Nbar::AttributeSet : public ydk::Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf profile_name; //type: string

}; // Native::Ip::Nbar::AttributeSet


class Native::Ip::Nbar::Classification : public ydk::Entity
{
    public:
        Classification();
        ~Classification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AutoLearn; //type: Native::Ip::Nbar::Classification::AutoLearn
        class Dns; //type: Native::Ip::Nbar::Classification::Dns
        class Granularity; //type: Native::Ip::Nbar::Classification::Granularity
        class TunneledTraffic; //type: Native::Ip::Nbar::Classification::TunneledTraffic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::AutoLearn> auto_learn; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity> granularity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::TunneledTraffic> tunneled_traffic;
        
}; // Native::Ip::Nbar::Classification


class Native::Ip::Nbar::Classification::AutoLearn : public ydk::Entity
{
    public:
        AutoLearn();
        ~AutoLearn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf top_asymmetric_socket; //type: empty
        class TopHosts; //type: Native::Ip::Nbar::Classification::AutoLearn::TopHosts
        class TopPorts; //type: Native::Ip::Nbar::Classification::AutoLearn::TopPorts

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::AutoLearn::TopHosts> top_hosts; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::AutoLearn::TopPorts> top_ports; // presence node
        
}; // Native::Ip::Nbar::Classification::AutoLearn


class Native::Ip::Nbar::Classification::AutoLearn::TopHosts : public ydk::Entity
{
    public:
        TopHosts();
        ~TopHosts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sample_rate; //type: uint16

}; // Native::Ip::Nbar::Classification::AutoLearn::TopHosts


class Native::Ip::Nbar::Classification::AutoLearn::TopPorts : public ydk::Entity
{
    public:
        TopPorts();
        ~TopPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sample_rate; //type: uint16

}; // Native::Ip::Nbar::Classification::AutoLearn::TopPorts


class Native::Ip::Nbar::Classification::Dns : public ydk::Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf classify_by_domain; //type: empty
        class Learning; //type: Native::Ip::Nbar::Classification::Dns::Learning

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Dns::Learning> learning; // presence node
        
}; // Native::Ip::Nbar::Classification::Dns


class Native::Ip::Nbar::Classification::Dns::Learning : public ydk::Entity
{
    public:
        Learning();
        ~Learning();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf guard; //type: empty

}; // Native::Ip::Nbar::Classification::Dns::Learning


class Native::Ip::Nbar::Classification::Granularity : public ydk::Entity
{
    public:
        Granularity();
        ~Granularity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf coarse_grain; //type: empty
        class FineGrain; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain> fine_grain; // presence node
        
}; // Native::Ip::Nbar::Classification::Granularity


class Native::Ip::Nbar::Classification::Granularity::FineGrain : public ydk::Entity
{
    public:
        FineGrain();
        ~FineGrain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Attribute; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute
        class Protocol; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute> attribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol> protocol;
        
}; // Native::Ip::Nbar::Classification::Granularity::FineGrain


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ApplicationGroup; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup
        class ApplicationSet; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet
        class BusinessRelevance; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance
        class Category; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category
        class Encrypted; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted
        class SubCategory; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory
        class TrafficClass; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass
        class Tunnel; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup> > application_group;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet> > application_set;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance> > business_relevance;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category> > category;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted> > encrypted;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory> > sub_category;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass> > traffic_class;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel> > tunnel;
        
}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet : public ydk::Entity
{
    public:
        ApplicationSet();
        ~ApplicationSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance : public ydk::Entity
{
    public:
        BusinessRelevance();
        ~BusinessRelevance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted : public ydk::Entity
{
    public:
        Encrypted();
        ~Encrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory : public ydk::Entity
{
    public:
        SubCategory();
        ~SubCategory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ProtocolsList; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList> > protocols_list;
        
}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList : public ydk::Entity
{
    public:
        ProtocolsList();
        ~ProtocolsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList


class Native::Ip::Nbar::Classification::TunneledTraffic : public ydk::Entity
{
    public:
        TunneledTraffic();
        ~TunneledTraffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf capwap; //type: empty
        ydk::YLeaf ipv6inip; //type: empty
        ydk::YLeaf teredo; //type: empty

}; // Native::Ip::Nbar::Classification::TunneledTraffic


class Native::Ip::Nbar::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class Composite; //type: Native::Ip::Nbar::Custom::Composite
        class Dns; //type: Native::Ip::Nbar::Custom::Dns
        class Http; //type: Native::Ip::Nbar::Custom::Http
        class Ssl; //type: Native::Ip::Nbar::Custom::Ssl
        class Transport; //type: Native::Ip::Nbar::Custom::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Composite> composite;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Http> http;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ssl> ssl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport> transport;
        
}; // Native::Ip::Nbar::Custom


class Native::Ip::Nbar::Custom::Composite : public ydk::Entity
{
    public:
        Composite();
        ~Composite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServerName; //type: Native::Ip::Nbar::Custom::Composite::ServerName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Composite::ServerName> > server_name;
        
}; // Native::Ip::Nbar::Custom::Composite


class Native::Ip::Nbar::Custom::Composite::ServerName : public ydk::Entity
{
    public:
        ServerName();
        ~ServerName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf extends; //type: string

}; // Native::Ip::Nbar::Custom::Composite::ServerName


class Native::Ip::Nbar::Custom::Dns : public ydk::Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainName; //type: Native::Ip::Nbar::Custom::Dns::DomainName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Dns::DomainName> > domain_name;
        
}; // Native::Ip::Nbar::Custom::Dns


class Native::Ip::Nbar::Custom::Dns::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf extends; //type: string

}; // Native::Ip::Nbar::Custom::Dns::DomainName


class Native::Ip::Nbar::Custom::Http : public ydk::Entity
{
    public:
        Http();
        ~Http();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cookie; //type: string
        ydk::YLeaf host; //type: string
        ydk::YLeaf method; //type: string
        ydk::YLeaf referer; //type: string
        ydk::YLeaf url; //type: string
        ydk::YLeaf user_agent; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf via; //type: string
        ydk::YLeaf id; //type: uint16

}; // Native::Ip::Nbar::Custom::Http


class Native::Ip::Nbar::Custom::Ssl : public ydk::Entity
{
    public:
        Ssl();
        ~Ssl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UniqueName; //type: Native::Ip::Nbar::Custom::Ssl::UniqueName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ssl::UniqueName> > unique_name;
        
}; // Native::Ip::Nbar::Custom::Ssl


class Native::Ip::Nbar::Custom::Ssl::UniqueName : public ydk::Entity
{
    public:
        UniqueName();
        ~UniqueName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint16

}; // Native::Ip::Nbar::Custom::Ssl::UniqueName


class Native::Ip::Nbar::Custom::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tcp; //type: Native::Ip::Nbar::Custom::Transport::Tcp
        class Udp; //type: Native::Ip::Nbar::Custom::Transport::Udp
        class UdpTcp; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp> tcp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp> udp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp> udp_tcp; // presence node
        
}; // Native::Ip::Nbar::Custom::Transport


class Native::Ip::Nbar::Custom::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class Dscp; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Port> port;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp


class Native::Ip::Nbar::Custom::Transport::Tcp::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Dscp


class Native::Ip::Nbar::Custom::Transport::Tcp::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ip_


class Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address


class Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet


class Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6


class Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address


class Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Transport::Tcp::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Direction


class Native::Ip::Nbar::Custom::Transport::Tcp::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers> > port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp::Port


class Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers


class Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range


class Native::Ip::Nbar::Custom::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class Dscp; //type: Native::Ip::Nbar::Custom::Transport::Udp::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Transport::Udp::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Transport::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Port> port;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp


class Native::Ip::Nbar::Custom::Transport::Udp::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Udp::Dscp


class Native::Ip::Nbar::Custom::Transport::Udp::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp::Ip_


class Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address


class Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet


class Native::Ip::Nbar::Custom::Transport::Udp::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp::Ipv6


class Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address


class Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Transport::Udp::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Udp::Direction


class Native::Ip::Nbar::Custom::Transport::Udp::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Transport::Udp::Port::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers> > port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp::Port


class Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers


class Native::Ip::Nbar::Custom::Transport::Udp::Port::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Udp::Port::Range


class Native::Ip::Nbar::Custom::Transport::UdpTcp : public ydk::Entity
{
    public:
        UdpTcp();
        ~UdpTcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class Dscp; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Port> port;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers> > port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Port

class Native::Ip::Msdp::Rpf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rfc3618;

};

class Native::Ip::Msdp::Vrf::Rpf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rfc3618;

};

class Native::Ip::Nat::Pool::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_host;
        static const ydk::Enum::YLeaf rotary;

};

class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::Proto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Proto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_9_ */

