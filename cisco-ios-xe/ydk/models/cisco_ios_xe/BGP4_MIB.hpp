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
        class Bgppeertable; //type: BGP4MIB::Bgppeertable
        class Bgprcvdpathattrtable; //type: BGP4MIB::Bgprcvdpathattrtable
        class Bgp4Pathattrtable; //type: BGP4MIB::Bgp4Pathattrtable

        std::shared_ptr<cisco_ios_xe::BGP4_MIB::BGP4MIB::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::BGP4_MIB::BGP4MIB::Bgp4Pathattrtable> bgp4pathattrtable;
        std::shared_ptr<cisco_ios_xe::BGP4_MIB::BGP4MIB::Bgppeertable> bgppeertable;
        std::shared_ptr<cisco_ios_xe::BGP4_MIB::BGP4MIB::Bgprcvdpathattrtable> bgprcvdpathattrtable;
        
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


class BGP4MIB::Bgp4Pathattrtable : public ydk::Entity
{
    public:
        Bgp4Pathattrtable();
        ~Bgp4Pathattrtable();

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

        class Bgp4Pathattrentry; //type: BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry

        std::vector<std::shared_ptr<cisco_ios_xe::BGP4_MIB::BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry> > bgp4pathattrentry;
        
}; // BGP4MIB::Bgp4Pathattrtable


class BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry : public ydk::Entity
{
    public:
        Bgp4Pathattrentry();
        ~Bgp4Pathattrentry();

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
        ydk::YLeaf bgp4pathattrorigin; //type: Bgp4Pathattrorigin
        ydk::YLeaf bgp4pathattraspathsegment; //type: binary
        ydk::YLeaf bgp4pathattrnexthop; //type: string
        ydk::YLeaf bgp4pathattrmultiexitdisc; //type: int32
        ydk::YLeaf bgp4pathattrlocalpref; //type: int32
        ydk::YLeaf bgp4pathattratomicaggregate; //type: Bgp4Pathattratomicaggregate
        ydk::YLeaf bgp4pathattraggregatoras; //type: int32
        ydk::YLeaf bgp4pathattraggregatoraddr; //type: string
        ydk::YLeaf bgp4pathattrcalclocalpref; //type: int32
        ydk::YLeaf bgp4pathattrbest; //type: Bgp4Pathattrbest
        ydk::YLeaf bgp4pathattrunknown; //type: binary
        class Bgp4Pathattrorigin;
        class Bgp4Pathattratomicaggregate;
        class Bgp4Pathattrbest;

}; // BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry


class BGP4MIB::Bgppeertable : public ydk::Entity
{
    public:
        Bgppeertable();
        ~Bgppeertable();

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

        class Bgppeerentry; //type: BGP4MIB::Bgppeertable::Bgppeerentry

        std::vector<std::shared_ptr<cisco_ios_xe::BGP4_MIB::BGP4MIB::Bgppeertable::Bgppeerentry> > bgppeerentry;
        
}; // BGP4MIB::Bgppeertable


class BGP4MIB::Bgppeertable::Bgppeerentry : public ydk::Entity
{
    public:
        Bgppeerentry();
        ~Bgppeerentry();

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
        ydk::YLeaf bgppeerstate; //type: Bgppeerstate
        ydk::YLeaf bgppeeradminstatus; //type: Bgppeeradminstatus
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
        ydk::YLeaf cbgppeerprevstate; //type: Cbgppeerprevstate
        class Bgppeerstate;
        class Bgppeeradminstatus;
        class Cbgppeerprevstate;

}; // BGP4MIB::Bgppeertable::Bgppeerentry


class BGP4MIB::Bgprcvdpathattrtable : public ydk::Entity
{
    public:
        Bgprcvdpathattrtable();
        ~Bgprcvdpathattrtable();

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

        class Bgppathattrentry; //type: BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry

        std::vector<std::shared_ptr<cisco_ios_xe::BGP4_MIB::BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry> > bgppathattrentry;
        
}; // BGP4MIB::Bgprcvdpathattrtable


class BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry : public ydk::Entity
{
    public:
        Bgppathattrentry();
        ~Bgppathattrentry();

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
        ydk::YLeaf bgppathattrorigin; //type: Bgppathattrorigin
        ydk::YLeaf bgppathattraspath; //type: binary
        ydk::YLeaf bgppathattrnexthop; //type: string
        ydk::YLeaf bgppathattrinterasmetric; //type: int32
        class Bgppathattrorigin;

}; // BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry

class BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4Pathattrorigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf incomplete;

};

class BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4Pathattratomicaggregate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lessSpecificRrouteNotSelected;
        static const ydk::Enum::YLeaf lessSpecificRouteSelected;

};

class BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4Pathattrbest : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class BGP4MIB::Bgppeertable::Bgppeerentry::Bgppeerstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf connect;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf opensent;
        static const ydk::Enum::YLeaf openconfirm;
        static const ydk::Enum::YLeaf established;

};

class BGP4MIB::Bgppeertable::Bgppeerentry::Bgppeeradminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stop;
        static const ydk::Enum::YLeaf start;

};

class BGP4MIB::Bgppeertable::Bgppeerentry::Cbgppeerprevstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf connect;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf opensent;
        static const ydk::Enum::YLeaf openconfirm;
        static const ydk::Enum::YLeaf established;

};

class BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::Bgppathattrorigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf incomplete;

};


}
}

#endif /* _BGP4_MIB_ */

