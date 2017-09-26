#ifndef _CISCO_IOS_XR_TRACEROUTE_ACT_
#define _CISCO_IOS_XR_TRACEROUTE_ACT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_traceroute_act {

class Traceroute : public ydk::Entity
{
    public:
        Traceroute();
        ~Traceroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Input; //type: Traceroute::Input
        class Output; //type: Traceroute::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traceroute_act::Traceroute::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traceroute_act::Traceroute::Output> output;
        
}; // Traceroute


class Traceroute::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        class Destination; //type: Traceroute::Input::Destination
        class Ipv4; //type: Traceroute::Input::Ipv4
        class Ipv6; //type: Traceroute::Input::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traceroute_act::Traceroute::Input::Destination> destination;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traceroute_act::Traceroute::Input::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traceroute_act::Traceroute::Input::Ipv6> ipv6;
        
}; // Traceroute::Input


class Traceroute::Input::Destination : public ydk::Entity
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

        ydk::YLeaf destination; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf probe; //type: uint16
        ydk::YLeaf numeric; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf min_ttl; //type: uint16
        ydk::YLeaf max_ttl; //type: uint16
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf verbose; //type: boolean
        ydk::YLeaf priority; //type: uint16
        ydk::YLeaf outgoing_interface; //type: string

}; // Traceroute::Input::Destination


class Traceroute::Input::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf destination; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf probe; //type: uint16
        ydk::YLeaf numeric; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf min_ttl; //type: uint16
        ydk::YLeaf max_ttl; //type: uint16
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf verbose; //type: boolean

}; // Traceroute::Input::Ipv4


class Traceroute::Input::Ipv6 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf destination; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf probe; //type: uint16
        ydk::YLeaf numeric; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf min_ttl; //type: uint16
        ydk::YLeaf max_ttl; //type: uint16
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf verbose; //type: boolean
        ydk::YLeaf priority; //type: uint16
        ydk::YLeaf outgoing_interface; //type: string

}; // Traceroute::Input::Ipv6


class Traceroute::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        class TracerouteResponse; //type: Traceroute::Output::TracerouteResponse

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traceroute_act::Traceroute::Output::TracerouteResponse> traceroute_response;
        
}; // Traceroute::Output


class Traceroute::Output::TracerouteResponse : public ydk::Entity
{
    public:
        TracerouteResponse();
        ~TracerouteResponse();

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

        class Ipv4; //type: Traceroute::Output::TracerouteResponse::Ipv4
        class Ipv6; //type: Traceroute::Output::TracerouteResponse::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traceroute_act::Traceroute::Output::TracerouteResponse::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traceroute_act::Traceroute::Output::TracerouteResponse::Ipv6> ipv6;
        
}; // Traceroute::Output::TracerouteResponse


class Traceroute::Output::TracerouteResponse::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf destination; //type: string
        ydk::YLeaf verbose_output; //type: string
        class Hops; //type: Traceroute::Output::TracerouteResponse::Ipv4::Hops

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traceroute_act::Traceroute::Output::TracerouteResponse::Ipv4::Hops> > hops;
        
}; // Traceroute::Output::TracerouteResponse::Ipv4


class Traceroute::Output::TracerouteResponse::Ipv4::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

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

        ydk::YLeaf hop_index; //type: uint32
        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf hop_hostname; //type: string
        class Probes; //type: Traceroute::Output::TracerouteResponse::Ipv4::Hops::Probes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traceroute_act::Traceroute::Output::TracerouteResponse::Ipv4::Hops::Probes> > probes;
        
}; // Traceroute::Output::TracerouteResponse::Ipv4::Hops


class Traceroute::Output::TracerouteResponse::Ipv4::Hops::Probes : public ydk::Entity
{
    public:
        Probes();
        ~Probes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf probe_index; //type: uint32
        ydk::YLeaf result; //type: string
        ydk::YLeaf delta_time; //type: uint32
        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf hop_hostname; //type: string

}; // Traceroute::Output::TracerouteResponse::Ipv4::Hops::Probes


class Traceroute::Output::TracerouteResponse::Ipv6 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf destination; //type: string
        ydk::YLeaf verbose_output; //type: string
        class Hops; //type: Traceroute::Output::TracerouteResponse::Ipv6::Hops

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traceroute_act::Traceroute::Output::TracerouteResponse::Ipv6::Hops> > hops;
        
}; // Traceroute::Output::TracerouteResponse::Ipv6


class Traceroute::Output::TracerouteResponse::Ipv6::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

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

        ydk::YLeaf hop_index; //type: uint32
        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf hop_hostname; //type: string
        class Probes; //type: Traceroute::Output::TracerouteResponse::Ipv6::Hops::Probes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traceroute_act::Traceroute::Output::TracerouteResponse::Ipv6::Hops::Probes> > probes;
        
}; // Traceroute::Output::TracerouteResponse::Ipv6::Hops


class Traceroute::Output::TracerouteResponse::Ipv6::Hops::Probes : public ydk::Entity
{
    public:
        Probes();
        ~Probes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf probe_index; //type: uint32
        ydk::YLeaf result; //type: string
        ydk::YLeaf delta_time; //type: uint32
        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf hop_hostname; //type: string

}; // Traceroute::Output::TracerouteResponse::Ipv6::Hops::Probes


}
}

#endif /* _CISCO_IOS_XR_TRACEROUTE_ACT_ */

