#ifndef _BGP4_MIB_
#define _BGP4_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace BGP4_MIB {

class Bgp4Mib : public Entity
{
    public:
        Bgp4Mib();
        ~Bgp4Mib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Bgp; //type: Bgp4Mib::Bgp
        class Bgppeertable; //type: Bgp4Mib::Bgppeertable
        class Bgprcvdpathattrtable; //type: Bgp4Mib::Bgprcvdpathattrtable
        class Bgp4Pathattrtable; //type: Bgp4Mib::Bgp4Pathattrtable

        std::shared_ptr<BGP4_MIB::Bgp4Mib::Bgp> bgp;
        std::shared_ptr<BGP4_MIB::Bgp4Mib::Bgp4Pathattrtable> bgp4pathattrtable;
        std::shared_ptr<BGP4_MIB::Bgp4Mib::Bgppeertable> bgppeertable;
        std::shared_ptr<BGP4_MIB::Bgp4Mib::Bgprcvdpathattrtable> bgprcvdpathattrtable;
        
}; // Bgp4Mib


class Bgp4Mib::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bgpversion; //type: binary
        YLeaf bgplocalas; //type: int32
        YLeaf bgpidentifier; //type: string

}; // Bgp4Mib::Bgp


class Bgp4Mib::Bgppeertable : public Entity
{
    public:
        Bgppeertable();
        ~Bgppeertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bgppeerentry; //type: Bgp4Mib::Bgppeertable::Bgppeerentry

        std::vector<std::shared_ptr<BGP4_MIB::Bgp4Mib::Bgppeertable::Bgppeerentry> > bgppeerentry;
        
}; // Bgp4Mib::Bgppeertable


class Bgp4Mib::Bgppeertable::Bgppeerentry : public Entity
{
    public:
        Bgppeerentry();
        ~Bgppeerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bgppeerremoteaddr; //type: string
        YLeaf bgppeeridentifier; //type: string
        YLeaf bgppeerstate; //type: BgppeerstateEnum
        YLeaf bgppeeradminstatus; //type: BgppeeradminstatusEnum
        YLeaf bgppeernegotiatedversion; //type: int32
        YLeaf bgppeerlocaladdr; //type: string
        YLeaf bgppeerlocalport; //type: int32
        YLeaf bgppeerremoteport; //type: int32
        YLeaf bgppeerremoteas; //type: int32
        YLeaf bgppeerinupdates; //type: uint32
        YLeaf bgppeeroutupdates; //type: uint32
        YLeaf bgppeerintotalmessages; //type: uint32
        YLeaf bgppeerouttotalmessages; //type: uint32
        YLeaf bgppeerlasterror; //type: binary
        YLeaf bgppeerfsmestablishedtransitions; //type: uint32
        YLeaf bgppeerfsmestablishedtime; //type: uint32
        YLeaf bgppeerconnectretryinterval; //type: int32
        YLeaf bgppeerholdtime; //type: int32
        YLeaf bgppeerkeepalive; //type: int32
        YLeaf bgppeerholdtimeconfigured; //type: int32
        YLeaf bgppeerkeepaliveconfigured; //type: int32
        YLeaf bgppeerminasoriginationinterval; //type: int32
        YLeaf bgppeerminrouteadvertisementinterval; //type: int32
        YLeaf bgppeerinupdateelapsedtime; //type: uint32
        YLeaf cbgppeerprefixaccepted; //type: uint32
        YLeaf cbgppeerprefixdenied; //type: uint32
        YLeaf cbgppeerprefixlimit; //type: uint32
        YLeaf cbgppeerprefixadvertised; //type: uint32
        YLeaf cbgppeerprefixsuppressed; //type: uint32
        YLeaf cbgppeerprefixwithdrawn; //type: uint32
        YLeaf cbgppeerlasterrortxt; //type: string
        YLeaf cbgppeerprevstate; //type: CbgppeerprevstateEnum
        class BgppeerstateEnum;
        class BgppeeradminstatusEnum;
        class CbgppeerprevstateEnum;

}; // Bgp4Mib::Bgppeertable::Bgppeerentry


class Bgp4Mib::Bgprcvdpathattrtable : public Entity
{
    public:
        Bgprcvdpathattrtable();
        ~Bgprcvdpathattrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bgppathattrentry; //type: Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry

        std::vector<std::shared_ptr<BGP4_MIB::Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry> > bgppathattrentry;
        
}; // Bgp4Mib::Bgprcvdpathattrtable


class Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry : public Entity
{
    public:
        Bgppathattrentry();
        ~Bgppathattrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bgppathattrdestnetwork; //type: string
        YLeaf bgppathattrpeer; //type: string
        YLeaf bgppathattrorigin; //type: BgppathattroriginEnum
        YLeaf bgppathattraspath; //type: binary
        YLeaf bgppathattrnexthop; //type: string
        YLeaf bgppathattrinterasmetric; //type: int32
        class BgppathattroriginEnum;

}; // Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry


class Bgp4Mib::Bgp4Pathattrtable : public Entity
{
    public:
        Bgp4Pathattrtable();
        ~Bgp4Pathattrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bgp4Pathattrentry; //type: Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry

        std::vector<std::shared_ptr<BGP4_MIB::Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry> > bgp4pathattrentry;
        
}; // Bgp4Mib::Bgp4Pathattrtable


class Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry : public Entity
{
    public:
        Bgp4Pathattrentry();
        ~Bgp4Pathattrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bgp4pathattripaddrprefix; //type: string
        YLeaf bgp4pathattripaddrprefixlen; //type: int32
        YLeaf bgp4pathattrpeer; //type: string
        YLeaf bgp4pathattrorigin; //type: Bgp4PathattroriginEnum
        YLeaf bgp4pathattraspathsegment; //type: binary
        YLeaf bgp4pathattrnexthop; //type: string
        YLeaf bgp4pathattrmultiexitdisc; //type: int32
        YLeaf bgp4pathattrlocalpref; //type: int32
        YLeaf bgp4pathattratomicaggregate; //type: Bgp4PathattratomicaggregateEnum
        YLeaf bgp4pathattraggregatoras; //type: int32
        YLeaf bgp4pathattraggregatoraddr; //type: string
        YLeaf bgp4pathattrcalclocalpref; //type: int32
        YLeaf bgp4pathattrbest; //type: Bgp4PathattrbestEnum
        YLeaf bgp4pathattrunknown; //type: binary
        class Bgp4PathattroriginEnum;
        class Bgp4PathattratomicaggregateEnum;
        class Bgp4PathattrbestEnum;

}; // Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry

class Bgp4Mib::Bgppeertable::Bgppeerentry::BgppeerstateEnum : public Enum
{
    public:
        static const Enum::YLeaf idle;
        static const Enum::YLeaf connect;
        static const Enum::YLeaf active;
        static const Enum::YLeaf opensent;
        static const Enum::YLeaf openconfirm;
        static const Enum::YLeaf established;

};

class Bgp4Mib::Bgppeertable::Bgppeerentry::BgppeeradminstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf stop;
        static const Enum::YLeaf start;

};

class Bgp4Mib::Bgppeertable::Bgppeerentry::CbgppeerprevstateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf idle;
        static const Enum::YLeaf connect;
        static const Enum::YLeaf active;
        static const Enum::YLeaf opensent;
        static const Enum::YLeaf openconfirm;
        static const Enum::YLeaf established;

};

class Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry::BgppathattroriginEnum : public Enum
{
    public:
        static const Enum::YLeaf igp;
        static const Enum::YLeaf egp;
        static const Enum::YLeaf incomplete;

};

class Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4PathattroriginEnum : public Enum
{
    public:
        static const Enum::YLeaf igp;
        static const Enum::YLeaf egp;
        static const Enum::YLeaf incomplete;

};

class Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4PathattratomicaggregateEnum : public Enum
{
    public:
        static const Enum::YLeaf lessSpecificRrouteNotSelected;
        static const Enum::YLeaf lessSpecificRouteSelected;

};

class Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4PathattrbestEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};


}
}

#endif /* _BGP4_MIB_ */

