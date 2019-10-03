#ifndef _CISCO_IOS_XE_MPLS_FORWARDING_OPER_
#define _CISCO_IOS_XE_MPLS_FORWARDING_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mpls_forwarding_oper {

class MplsForwardingOperData : public ydk::Entity
{
    public:
        MplsForwardingOperData();
        ~MplsForwardingOperData();

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

        class MplsLocalLabel; //type: MplsForwardingOperData::MplsLocalLabel
        class MplsLocalLabelStatistics; //type: MplsForwardingOperData::MplsLocalLabelStatistics

        ydk::YList mpls_local_label;
        ydk::YList mpls_local_label_statistics;
        
}; // MplsForwardingOperData


class MplsForwardingOperData::MplsLocalLabel : public ydk::Entity
{
    public:
        MplsLocalLabel();
        ~MplsLocalLabel();

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

        ydk::YLeaf local_label; //type: uint32
        class ConnectionInformation; //type: MplsForwardingOperData::MplsLocalLabel::ConnectionInformation
        class ForwardingPaths; //type: MplsForwardingOperData::MplsLocalLabel::ForwardingPaths

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_forwarding_oper::MplsForwardingOperData::MplsLocalLabel::ConnectionInformation> connection_information;
        ydk::YList forwarding_paths;
        
}; // MplsForwardingOperData::MplsLocalLabel


class MplsForwardingOperData::MplsLocalLabel::ConnectionInformation : public ydk::Entity
{
    public:
        ConnectionInformation();
        ~ConnectionInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf info_str; //type: string
        ydk::YLeaf ip_prefix; //type: string

}; // MplsForwardingOperData::MplsLocalLabel::ConnectionInformation


class MplsForwardingOperData::MplsLocalLabel::ForwardingPaths : public ydk::Entity
{
    public:
        ForwardingPaths();
        ~ForwardingPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OutgoingInterface; //type: MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface
        class OutgoingLabel; //type: MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel
        class NextHop; //type: MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_forwarding_oper::MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface> outgoing_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_forwarding_oper::MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel> outgoing_label;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_forwarding_oper::MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop> next_hop;
        
}; // MplsForwardingOperData::MplsLocalLabel::ForwardingPaths


class MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface : public ydk::Entity
{
    public:
        OutgoingInterface();
        ~OutgoingInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_type; //type: OutgoingInterfaceType
        ydk::YLeaf interface_value; //type: string

}; // MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface


class MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel : public ydk::Entity
{
    public:
        OutgoingLabel();
        ~OutgoingLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_label; //type: boolean
        ydk::YLeaf pop_label; //type: uint32
        ydk::YLeaf ipv4_explicit_null; //type: uint32
        ydk::YLeaf ipv6_explicit_null; //type: uint32
        ydk::YLeaf regular_label; //type: uint32
        ydk::YLeaf invalid_label; //type: boolean

}; // MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel


class MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf p2p; //type: boolean
        ydk::YLeaf ip_address; //type: string

}; // MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop


class MplsForwardingOperData::MplsLocalLabelStatistics : public ydk::Entity
{
    public:
        MplsLocalLabelStatistics();
        ~MplsLocalLabelStatistics();

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

        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf forwarding_path_index; //type: uint8
        ydk::YLeaf label_switched_bytes; //type: uint64
        ydk::YLeaf label_switched_packets; //type: uint64

}; // MplsForwardingOperData::MplsLocalLabelStatistics

class ForwardingNextHopType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf point2point;
        static const ydk::Enum::YLeaf next_hop_ip_address;

        static int get_enum_value(const std::string & name) {
            if (name == "point2point") return 0;
            if (name == "next-hop-ip-address") return 1;
            return -1;
        }
};

class OutgoingInterfaceDescriptionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface_type;
        static const ydk::Enum::YLeaf interface_value;

        static int get_enum_value(const std::string & name) {
            if (name == "interface-type") return 0;
            if (name == "interface-value") return 1;
            return -1;
        }
};

class ConnectionInfoType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf information_string;
        static const ydk::Enum::YLeaf ip_prefix;

        static int get_enum_value(const std::string & name) {
            if (name == "information-string") return 0;
            if (name == "ip-prefix") return 1;
            return -1;
        }
};

class OutgoingInterfaceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf punt;
        static const ydk::Enum::YLeaf aggregate;
        static const ydk::Enum::YLeaf exception;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "drop") return 0;
            if (name == "punt") return 1;
            if (name == "aggregate") return 2;
            if (name == "exception") return 3;
            if (name == "none") return 4;
            return -1;
        }
};

class OutgoingLabelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_label;
        static const ydk::Enum::YLeaf pop_label;
        static const ydk::Enum::YLeaf ipv4_explicit_null;
        static const ydk::Enum::YLeaf ipv6_explicit_null;
        static const ydk::Enum::YLeaf regular_label;
        static const ydk::Enum::YLeaf invalid_label;

        static int get_enum_value(const std::string & name) {
            if (name == "no-label") return 0;
            if (name == "pop-label") return 1;
            if (name == "ipv4-explicit-null") return 2;
            if (name == "ipv6-explicit-null") return 3;
            if (name == "regular-label") return 4;
            if (name == "invalid-label") return 5;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_MPLS_FORWARDING_OPER_ */

