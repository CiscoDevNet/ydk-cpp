#ifndef _CISCO_IOS_XR_ETHERNET_SPAN_CFG_
#define _CISCO_IOS_XR_ETHERNET_SPAN_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_Ethernet_SPAN_cfg {

class SpanMonitorSession : public ydk::Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

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

        class Sessions; //type: SpanMonitorSession::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_cfg::SpanMonitorSession::Sessions> sessions;
        
}; // SpanMonitorSession


class SpanMonitorSession::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

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

        class Session; //type: SpanMonitorSession::Sessions::Session

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_cfg::SpanMonitorSession::Sessions::Session> > session;
        
}; // SpanMonitorSession::Sessions


class SpanMonitorSession::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf session; //type: string
        ydk::YLeaf class_; //type: SpanSessionClass
        class Destination; //type: SpanMonitorSession::Sessions::Session::Destination

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_Ethernet_SPAN_cfg::SpanMonitorSession::Sessions::Session::Destination> destination;
        
}; // SpanMonitorSession::Sessions::Session


class SpanMonitorSession::Sessions::Session::Destination : public ydk::Entity
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

        ydk::YLeaf destination_type; //type: SpanDestination
        ydk::YLeaf destination_interface_name; //type: string
        ydk::YLeaf destination_ipv4_address; //type: string
        ydk::YLeaf destination_ipv6_address; //type: string

}; // SpanMonitorSession::Sessions::Session::Destination

class SpanTrafficDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rx_only;
        static const ydk::Enum::YLeaf tx_only;

};

class SpanMirrorInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_512;
        static const ydk::Enum::YLeaf Y_1k;
        static const ydk::Enum::YLeaf Y_2k;
        static const ydk::Enum::YLeaf Y_4k;
        static const ydk::Enum::YLeaf Y_8k;
        static const ydk::Enum::YLeaf Y_16k;

};

class SpanDestination : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf pseudowire;
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf ipv6_address;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_SPAN_CFG_ */

