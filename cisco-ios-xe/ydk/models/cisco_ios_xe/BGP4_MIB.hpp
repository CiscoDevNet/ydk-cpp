#ifndef _BGP4_MIB_
#define _BGP4_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace BGP4_MIB {

class BGP4MIB : public ydk::Entity
{
    public:
        BGP4MIB();
        ~BGP4MIB();

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

        class Bgp; //type: BGP4MIB::Bgp
        class BgpPeerTable; //type: BGP4MIB::BgpPeerTable
        class BgpRcvdPathAttrTable; //type: BGP4MIB::BgpRcvdPathAttrTable
        class Bgp4PathAttrTable; //type: BGP4MIB::Bgp4PathAttrTable

        std::shared_ptr<cisco_ios_xe::BGP4_MIB::BGP4MIB::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::BGP4_MIB::BGP4MIB::BgpPeerTable> bgppeertable;
        std::shared_ptr<cisco_ios_xe::BGP4_MIB::BGP4MIB::BgpRcvdPathAttrTable> bgprcvdpathattrtable;
        std::shared_ptr<cisco_ios_xe::BGP4_MIB::BGP4MIB::Bgp4PathAttrTable> bgp4pathattrtable;
        
}; // BGP4MIB


class BGP4MIB::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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

        ydk::YLeaf bgpversion; //type: binary
        ydk::YLeaf bgplocalas; //type: int32
        ydk::YLeaf bgpidentifier; //type: string

}; // BGP4MIB::Bgp


class BGP4MIB::BgpPeerTable : public ydk::Entity
{
    public:
        BgpPeerTable();
        ~BgpPeerTable();

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

        class BgpPeerEntry; //type: BGP4MIB::BgpPeerTable::BgpPeerEntry

        ydk::YList bgppeerentry;
        
}; // BGP4MIB::BgpPeerTable


class BGP4MIB::BgpPeerTable::BgpPeerEntry : public ydk::Entity
{
    public:
        BgpPeerEntry();
        ~BgpPeerEntry();

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

        ydk::YLeaf bgppeerremoteaddr; //type: string
        ydk::YLeaf bgppeeridentifier; //type: string
        ydk::YLeaf bgppeerstate; //type: BgpPeerState
        ydk::YLeaf bgppeeradminstatus; //type: BgpPeerAdminStatus
        ydk::YLeaf bgppeernegotiatedversion; //type: int32
        ydk::YLeaf bgppeerlocaladdr; //type: string
        ydk::YLeaf bgppeerlocalport; //type: int32
        ydk::YLeaf bgppeerremoteport; //type: int32
        ydk::YLeaf bgppeerremoteas; //type: int32
        ydk::YLeaf bgppeerinupdates; //type: uint32
        ydk::YLeaf bgppeeroutupdates; //type: uint32
        ydk::YLeaf bgppeerintotalmessages; //type: uint32
        ydk::YLeaf bgppeerouttotalmessages; //type: uint32
        ydk::YLeaf bgppeerlasterror; //type: binary
        ydk::YLeaf bgppeerfsmestablishedtransitions; //type: uint32
        ydk::YLeaf bgppeerfsmestablishedtime; //type: uint32
        ydk::YLeaf bgppeerconnectretryinterval; //type: int32
        ydk::YLeaf bgppeerholdtime; //type: int32
        ydk::YLeaf bgppeerkeepalive; //type: int32
        ydk::YLeaf bgppeerholdtimeconfigured; //type: int32
        ydk::YLeaf bgppeerkeepaliveconfigured; //type: int32
        ydk::YLeaf bgppeerminasoriginationinterval; //type: int32
        ydk::YLeaf bgppeerminrouteadvertisementinterval; //type: int32
        ydk::YLeaf bgppeerinupdateelapsedtime; //type: uint32
        ydk::YLeaf cbgppeerprefixaccepted; //type: uint32
        ydk::YLeaf cbgppeerprefixdenied; //type: uint32
        ydk::YLeaf cbgppeerprefixlimit; //type: uint32
        ydk::YLeaf cbgppeerprefixadvertised; //type: uint32
        ydk::YLeaf cbgppeerprefixsuppressed; //type: uint32
        ydk::YLeaf cbgppeerprefixwithdrawn; //type: uint32
        ydk::YLeaf cbgppeerlasterrortxt; //type: string
        ydk::YLeaf cbgppeerprevstate; //type: CbgpPeerPrevState
        class BgpPeerState;
        class BgpPeerAdminStatus;
        class CbgpPeerPrevState;

}; // BGP4MIB::BgpPeerTable::BgpPeerEntry


class BGP4MIB::BgpRcvdPathAttrTable : public ydk::Entity
{
    public:
        BgpRcvdPathAttrTable();
        ~BgpRcvdPathAttrTable();

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

        class BgpPathAttrEntry; //type: BGP4MIB::BgpRcvdPathAttrTable::BgpPathAttrEntry

        ydk::YList bgppathattrentry;
        
}; // BGP4MIB::BgpRcvdPathAttrTable


class BGP4MIB::BgpRcvdPathAttrTable::BgpPathAttrEntry : public ydk::Entity
{
    public:
        BgpPathAttrEntry();
        ~BgpPathAttrEntry();

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

        ydk::YLeaf bgppathattrdestnetwork; //type: string
        ydk::YLeaf bgppathattrpeer; //type: string
        ydk::YLeaf bgppathattrorigin; //type: BgpPathAttrOrigin
        ydk::YLeaf bgppathattraspath; //type: binary
        ydk::YLeaf bgppathattrnexthop; //type: string
        ydk::YLeaf bgppathattrinterasmetric; //type: int32
        class BgpPathAttrOrigin;

}; // BGP4MIB::BgpRcvdPathAttrTable::BgpPathAttrEntry


class BGP4MIB::Bgp4PathAttrTable : public ydk::Entity
{
    public:
        Bgp4PathAttrTable();
        ~Bgp4PathAttrTable();

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

        class Bgp4PathAttrEntry; //type: BGP4MIB::Bgp4PathAttrTable::Bgp4PathAttrEntry

        ydk::YList bgp4pathattrentry;
        
}; // BGP4MIB::Bgp4PathAttrTable


class BGP4MIB::Bgp4PathAttrTable::Bgp4PathAttrEntry : public ydk::Entity
{
    public:
        Bgp4PathAttrEntry();
        ~Bgp4PathAttrEntry();

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

        ydk::YLeaf bgp4pathattripaddrprefix; //type: string
        ydk::YLeaf bgp4pathattripaddrprefixlen; //type: int32
        ydk::YLeaf bgp4pathattrpeer; //type: string
        ydk::YLeaf bgp4pathattrorigin; //type: Bgp4PathAttrOrigin
        ydk::YLeaf bgp4pathattraspathsegment; //type: binary
        ydk::YLeaf bgp4pathattrnexthop; //type: string
        ydk::YLeaf bgp4pathattrmultiexitdisc; //type: int32
        ydk::YLeaf bgp4pathattrlocalpref; //type: int32
        ydk::YLeaf bgp4pathattratomicaggregate; //type: Bgp4PathAttrAtomicAggregate
        ydk::YLeaf bgp4pathattraggregatoras; //type: int32
        ydk::YLeaf bgp4pathattraggregatoraddr; //type: string
        ydk::YLeaf bgp4pathattrcalclocalpref; //type: int32
        ydk::YLeaf bgp4pathattrbest; //type: Bgp4PathAttrBest
        ydk::YLeaf bgp4pathattrunknown; //type: binary
        class Bgp4PathAttrOrigin;
        class Bgp4PathAttrAtomicAggregate;
        class Bgp4PathAttrBest;

}; // BGP4MIB::Bgp4PathAttrTable::Bgp4PathAttrEntry

class BGP4MIB::BgpPeerTable::BgpPeerEntry::BgpPeerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf connect;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf opensent;
        static const ydk::Enum::YLeaf openconfirm;
        static const ydk::Enum::YLeaf established;

        static int get_enum_value(const std::string & name) {
            if (name == "idle") return 1;
            if (name == "connect") return 2;
            if (name == "active") return 3;
            if (name == "opensent") return 4;
            if (name == "openconfirm") return 5;
            if (name == "established") return 6;
            return -1;
        }
};

class BGP4MIB::BgpPeerTable::BgpPeerEntry::BgpPeerAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stop;
        static const ydk::Enum::YLeaf start;

        static int get_enum_value(const std::string & name) {
            if (name == "stop") return 1;
            if (name == "start") return 2;
            return -1;
        }
};

class BGP4MIB::BgpPeerTable::BgpPeerEntry::CbgpPeerPrevState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf connect;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf opensent;
        static const ydk::Enum::YLeaf openconfirm;
        static const ydk::Enum::YLeaf established;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "idle") return 1;
            if (name == "connect") return 2;
            if (name == "active") return 3;
            if (name == "opensent") return 4;
            if (name == "openconfirm") return 5;
            if (name == "established") return 6;
            return -1;
        }
};

class BGP4MIB::BgpRcvdPathAttrTable::BgpPathAttrEntry::BgpPathAttrOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf incomplete;

        static int get_enum_value(const std::string & name) {
            if (name == "igp") return 1;
            if (name == "egp") return 2;
            if (name == "incomplete") return 3;
            return -1;
        }
};

class BGP4MIB::Bgp4PathAttrTable::Bgp4PathAttrEntry::Bgp4PathAttrOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf incomplete;

        static int get_enum_value(const std::string & name) {
            if (name == "igp") return 1;
            if (name == "egp") return 2;
            if (name == "incomplete") return 3;
            return -1;
        }
};

class BGP4MIB::Bgp4PathAttrTable::Bgp4PathAttrEntry::Bgp4PathAttrAtomicAggregate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lessSpecificRrouteNotSelected;
        static const ydk::Enum::YLeaf lessSpecificRouteSelected;

        static int get_enum_value(const std::string & name) {
            if (name == "lessSpecificRrouteNotSelected") return 1;
            if (name == "lessSpecificRouteSelected") return 2;
            return -1;
        }
};

class BGP4MIB::Bgp4PathAttrTable::Bgp4PathAttrEntry::Bgp4PathAttrBest : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 1;
            if (name == "true") return 2;
            return -1;
        }
};


}
}

#endif /* _BGP4_MIB_ */

