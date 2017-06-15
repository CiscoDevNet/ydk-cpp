#ifndef _BRIDGE_MIB_
#define _BRIDGE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace BRIDGE_MIB {

class BridgeMib : public Entity
{
    public:
        BridgeMib();
        ~BridgeMib();

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

        class Dot1Dbase; //type: BridgeMib::Dot1Dbase
        class Dot1Dstp; //type: BridgeMib::Dot1Dstp
        class Dot1Dtp; //type: BridgeMib::Dot1Dtp
        class Dot1Dbaseporttable; //type: BridgeMib::Dot1Dbaseporttable
        class Dot1Dstpporttable; //type: BridgeMib::Dot1Dstpporttable
        class Dot1Dtpfdbtable; //type: BridgeMib::Dot1Dtpfdbtable
        class Dot1Dtpporttable; //type: BridgeMib::Dot1Dtpporttable
        class Dot1Dstatictable; //type: BridgeMib::Dot1Dstatictable

        std::shared_ptr<BRIDGE_MIB::BridgeMib::Dot1Dbase> dot1dbase_;
        std::shared_ptr<BRIDGE_MIB::BridgeMib::Dot1Dbaseporttable> dot1dbaseporttable_;
        std::shared_ptr<BRIDGE_MIB::BridgeMib::Dot1Dstatictable> dot1dstatictable_;
        std::shared_ptr<BRIDGE_MIB::BridgeMib::Dot1Dstp> dot1dstp_;
        std::shared_ptr<BRIDGE_MIB::BridgeMib::Dot1Dstpporttable> dot1dstpporttable_;
        std::shared_ptr<BRIDGE_MIB::BridgeMib::Dot1Dtp> dot1dtp_;
        std::shared_ptr<BRIDGE_MIB::BridgeMib::Dot1Dtpfdbtable> dot1dtpfdbtable_;
        std::shared_ptr<BRIDGE_MIB::BridgeMib::Dot1Dtpporttable> dot1dtpporttable_;
        
}; // BridgeMib


class BridgeMib::Dot1Dbase : public Entity
{
    public:
        Dot1Dbase();
        ~Dot1Dbase();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1dbasebridgeaddress; //type: string
        YLeaf dot1dbasenumports; //type: int32
        YLeaf dot1dbasetype; //type: Dot1DbasetypeEnum
        class Dot1DbasetypeEnum;

}; // BridgeMib::Dot1Dbase


class BridgeMib::Dot1Dstp : public Entity
{
    public:
        Dot1Dstp();
        ~Dot1Dstp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1dstpprotocolspecification; //type: Dot1DstpprotocolspecificationEnum
        YLeaf dot1dstppriority; //type: int32
        YLeaf dot1dstptimesincetopologychange; //type: uint32
        YLeaf dot1dstptopchanges; //type: uint32
        YLeaf dot1dstpdesignatedroot; //type: binary
        YLeaf dot1dstprootcost; //type: int32
        YLeaf dot1dstprootport; //type: int32
        YLeaf dot1dstpmaxage; //type: int32
        YLeaf dot1dstphellotime; //type: int32
        YLeaf dot1dstpholdtime; //type: int32
        YLeaf dot1dstpforwarddelay; //type: int32
        YLeaf dot1dstpbridgemaxage; //type: int32
        YLeaf dot1dstpbridgehellotime; //type: int32
        YLeaf dot1dstpbridgeforwarddelay; //type: int32
        class Dot1DstpprotocolspecificationEnum;

}; // BridgeMib::Dot1Dstp


class BridgeMib::Dot1Dtp : public Entity
{
    public:
        Dot1Dtp();
        ~Dot1Dtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1dtplearnedentrydiscards; //type: uint32
        YLeaf dot1dtpagingtime; //type: int32

}; // BridgeMib::Dot1Dtp


class BridgeMib::Dot1Dbaseporttable : public Entity
{
    public:
        Dot1Dbaseporttable();
        ~Dot1Dbaseporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Dbaseportentry; //type: BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry

        std::vector<std::shared_ptr<BRIDGE_MIB::BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry> > dot1dbaseportentry_;
        
}; // BridgeMib::Dot1Dbaseporttable


class BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry : public Entity
{
    public:
        Dot1Dbaseportentry();
        ~Dot1Dbaseportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1dbaseport; //type: int32
        YLeaf dot1dbaseportifindex; //type: int32
        YLeaf dot1dbaseportcircuit; //type: string
        YLeaf dot1dbaseportdelayexceededdiscards; //type: uint32
        YLeaf dot1dbaseportmtuexceededdiscards; //type: uint32
        YLeaf dot1dportcapabilities; //type: Dot1Dportcapabilities
        YLeaf dot1dportdefaultuserpriority; //type: int32
        YLeaf dot1dportnumtrafficclasses; //type: int32
        YLeaf dot1dportgarpjointime; //type: int32
        YLeaf dot1dportgarpleavetime; //type: int32
        YLeaf dot1dportgarpleavealltime; //type: int32
        YLeaf dot1dportgmrpstatus; //type: EnabledstatusEnum
        YLeaf dot1dportgmrpfailedregistrations; //type: uint32
        YLeaf dot1dportgmrplastpduorigin; //type: string
        YLeaf dot1dportrestrictedgroupregistration; //type: boolean

}; // BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry


class BridgeMib::Dot1Dstpporttable : public Entity
{
    public:
        Dot1Dstpporttable();
        ~Dot1Dstpporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Dstpportentry; //type: BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry

        std::vector<std::shared_ptr<BRIDGE_MIB::BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry> > dot1dstpportentry_;
        
}; // BridgeMib::Dot1Dstpporttable


class BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry : public Entity
{
    public:
        Dot1Dstpportentry();
        ~Dot1Dstpportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1dstpport; //type: int32
        YLeaf dot1dstpportpriority; //type: int32
        YLeaf dot1dstpportstate; //type: Dot1DstpportstateEnum
        YLeaf dot1dstpportenable; //type: Dot1DstpportenableEnum
        YLeaf dot1dstpportpathcost; //type: int32
        YLeaf dot1dstpportdesignatedroot; //type: binary
        YLeaf dot1dstpportdesignatedcost; //type: int32
        YLeaf dot1dstpportdesignatedbridge; //type: binary
        YLeaf dot1dstpportdesignatedport; //type: binary
        YLeaf dot1dstpportforwardtransitions; //type: uint32
        YLeaf dot1dstpportpathcost32; //type: int32
        YLeaf stpxlongstpportpathcost; //type: uint32
        class Dot1DstpportstateEnum;
        class Dot1DstpportenableEnum;

}; // BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry


class BridgeMib::Dot1Dtpfdbtable : public Entity
{
    public:
        Dot1Dtpfdbtable();
        ~Dot1Dtpfdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Dtpfdbentry; //type: BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry

        std::vector<std::shared_ptr<BRIDGE_MIB::BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry> > dot1dtpfdbentry_;
        
}; // BridgeMib::Dot1Dtpfdbtable


class BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry : public Entity
{
    public:
        Dot1Dtpfdbentry();
        ~Dot1Dtpfdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1dtpfdbaddress; //type: string
        YLeaf dot1dtpfdbport; //type: int32
        YLeaf dot1dtpfdbstatus; //type: Dot1DtpfdbstatusEnum
        class Dot1DtpfdbstatusEnum;

}; // BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry


class BridgeMib::Dot1Dtpporttable : public Entity
{
    public:
        Dot1Dtpporttable();
        ~Dot1Dtpporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Dtpportentry; //type: BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry

        std::vector<std::shared_ptr<BRIDGE_MIB::BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry> > dot1dtpportentry_;
        
}; // BridgeMib::Dot1Dtpporttable


class BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry : public Entity
{
    public:
        Dot1Dtpportentry();
        ~Dot1Dtpportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1dtpport; //type: int32
        YLeaf dot1dtpportmaxinfo; //type: int32
        YLeaf dot1dtpportinframes; //type: uint32
        YLeaf dot1dtpportoutframes; //type: uint32
        YLeaf dot1dtpportindiscards; //type: uint32

}; // BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry


class BridgeMib::Dot1Dstatictable : public Entity
{
    public:
        Dot1Dstatictable();
        ~Dot1Dstatictable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Dstaticentry; //type: BridgeMib::Dot1Dstatictable::Dot1Dstaticentry

        std::vector<std::shared_ptr<BRIDGE_MIB::BridgeMib::Dot1Dstatictable::Dot1Dstaticentry> > dot1dstaticentry_;
        
}; // BridgeMib::Dot1Dstatictable


class BridgeMib::Dot1Dstatictable::Dot1Dstaticentry : public Entity
{
    public:
        Dot1Dstaticentry();
        ~Dot1Dstaticentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1dstaticaddress; //type: string
        YLeaf dot1dstaticreceiveport; //type: int32
        YLeaf dot1dstaticallowedtogoto; //type: binary
        YLeaf dot1dstaticstatus; //type: Dot1DstaticstatusEnum
        class Dot1DstaticstatusEnum;

}; // BridgeMib::Dot1Dstatictable::Dot1Dstaticentry

class BridgeMib::Dot1Dbase::Dot1DbasetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf transparent_only;
        static const Enum::YLeaf sourceroute_only;
        static const Enum::YLeaf srt;

};

class BridgeMib::Dot1Dstp::Dot1DstpprotocolspecificationEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf decLb100;
        static const Enum::YLeaf ieee8021d;

};

class BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1DstpportstateEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf blocking;
        static const Enum::YLeaf listening;
        static const Enum::YLeaf learning;
        static const Enum::YLeaf forwarding;
        static const Enum::YLeaf broken;

};

class BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1DstpportenableEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::Dot1DtpfdbstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf learned;
        static const Enum::YLeaf self;
        static const Enum::YLeaf mgmt;

};

class BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::Dot1DstaticstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf permanent;
        static const Enum::YLeaf deleteOnReset;
        static const Enum::YLeaf deleteOnTimeout;

};


}
}

#endif /* _BRIDGE_MIB_ */

