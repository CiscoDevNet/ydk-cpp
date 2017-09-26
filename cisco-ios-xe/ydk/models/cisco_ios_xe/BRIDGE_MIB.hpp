#ifndef _BRIDGE_MIB_
#define _BRIDGE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace BRIDGE_MIB {

class BRIDGEMIB : public ydk::Entity
{
    public:
        BRIDGEMIB();
        ~BRIDGEMIB();

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

        class Dot1Dbase; //type: BRIDGEMIB::Dot1Dbase
        class Dot1Dstp; //type: BRIDGEMIB::Dot1Dstp
        class Dot1Dtp; //type: BRIDGEMIB::Dot1Dtp
        class Dot1Dbaseporttable; //type: BRIDGEMIB::Dot1Dbaseporttable
        class Dot1Dstpporttable; //type: BRIDGEMIB::Dot1Dstpporttable
        class Dot1Dtpfdbtable; //type: BRIDGEMIB::Dot1Dtpfdbtable
        class Dot1Dtpporttable; //type: BRIDGEMIB::Dot1Dtpporttable
        class Dot1Dstatictable; //type: BRIDGEMIB::Dot1Dstatictable

        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dbase> dot1dbase;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dbaseporttable> dot1dbaseporttable;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dstatictable> dot1dstatictable;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dstp> dot1dstp;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dstpporttable> dot1dstpporttable;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dtp> dot1dtp;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dtpfdbtable> dot1dtpfdbtable;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dtpporttable> dot1dtpporttable;
        
}; // BRIDGEMIB


class BRIDGEMIB::Dot1Dbase : public ydk::Entity
{
    public:
        Dot1Dbase();
        ~Dot1Dbase();

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

        ydk::YLeaf dot1dbasebridgeaddress; //type: string
        ydk::YLeaf dot1dbasenumports; //type: int32
        ydk::YLeaf dot1dbasetype; //type: Dot1Dbasetype
        class Dot1Dbasetype;

}; // BRIDGEMIB::Dot1Dbase


class BRIDGEMIB::Dot1Dbaseporttable : public ydk::Entity
{
    public:
        Dot1Dbaseporttable();
        ~Dot1Dbaseporttable();

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

        class Dot1Dbaseportentry; //type: BRIDGEMIB::Dot1Dbaseporttable::Dot1Dbaseportentry

        std::vector<std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dbaseporttable::Dot1Dbaseportentry> > dot1dbaseportentry;
        
}; // BRIDGEMIB::Dot1Dbaseporttable


class BRIDGEMIB::Dot1Dbaseporttable::Dot1Dbaseportentry : public ydk::Entity
{
    public:
        Dot1Dbaseportentry();
        ~Dot1Dbaseportentry();

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

        ydk::YLeaf dot1dbaseport; //type: int32
        ydk::YLeaf dot1dbaseportifindex; //type: int32
        ydk::YLeaf dot1dbaseportcircuit; //type: string
        ydk::YLeaf dot1dbaseportdelayexceededdiscards; //type: uint32
        ydk::YLeaf dot1dbaseportmtuexceededdiscards; //type: uint32
        ydk::YLeaf dot1dportcapabilities; //type: Dot1Dportcapabilities
        ydk::YLeaf dot1dportdefaultuserpriority; //type: int32
        ydk::YLeaf dot1dportnumtrafficclasses; //type: int32
        ydk::YLeaf dot1dportgarpjointime; //type: int32
        ydk::YLeaf dot1dportgarpleavetime; //type: int32
        ydk::YLeaf dot1dportgarpleavealltime; //type: int32
        ydk::YLeaf dot1dportgmrpstatus; //type: EnabledStatus
        ydk::YLeaf dot1dportgmrpfailedregistrations; //type: uint32
        ydk::YLeaf dot1dportgmrplastpduorigin; //type: string
        ydk::YLeaf dot1dportrestrictedgroupregistration; //type: boolean
        ydk::YLeaf dot1qpvid; //type: uint32
        ydk::YLeaf dot1qportacceptableframetypes; //type: Dot1Qportacceptableframetypes
        ydk::YLeaf dot1qportingressfiltering; //type: boolean
        ydk::YLeaf dot1qportgvrpstatus; //type: EnabledStatus
        ydk::YLeaf dot1qportgvrpfailedregistrations; //type: uint32
        ydk::YLeaf dot1qportgvrplastpduorigin; //type: string
        ydk::YLeaf dot1qportrestrictedvlanregistration; //type: boolean
        class Dot1Qportacceptableframetypes;

}; // BRIDGEMIB::Dot1Dbaseporttable::Dot1Dbaseportentry


class BRIDGEMIB::Dot1Dstatictable : public ydk::Entity
{
    public:
        Dot1Dstatictable();
        ~Dot1Dstatictable();

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

        class Dot1Dstaticentry; //type: BRIDGEMIB::Dot1Dstatictable::Dot1Dstaticentry

        std::vector<std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dstatictable::Dot1Dstaticentry> > dot1dstaticentry;
        
}; // BRIDGEMIB::Dot1Dstatictable


class BRIDGEMIB::Dot1Dstatictable::Dot1Dstaticentry : public ydk::Entity
{
    public:
        Dot1Dstaticentry();
        ~Dot1Dstaticentry();

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

        ydk::YLeaf dot1dstaticaddress; //type: string
        ydk::YLeaf dot1dstaticreceiveport; //type: int32
        ydk::YLeaf dot1dstaticallowedtogoto; //type: binary
        ydk::YLeaf dot1dstaticstatus; //type: Dot1Dstaticstatus
        class Dot1Dstaticstatus;

}; // BRIDGEMIB::Dot1Dstatictable::Dot1Dstaticentry


class BRIDGEMIB::Dot1Dstp : public ydk::Entity
{
    public:
        Dot1Dstp();
        ~Dot1Dstp();

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

        ydk::YLeaf dot1dstpprotocolspecification; //type: Dot1Dstpprotocolspecification
        ydk::YLeaf dot1dstppriority; //type: int32
        ydk::YLeaf dot1dstptimesincetopologychange; //type: uint32
        ydk::YLeaf dot1dstptopchanges; //type: uint32
        ydk::YLeaf dot1dstpdesignatedroot; //type: binary
        ydk::YLeaf dot1dstprootcost; //type: int32
        ydk::YLeaf dot1dstprootport; //type: int32
        ydk::YLeaf dot1dstpmaxage; //type: int32
        ydk::YLeaf dot1dstphellotime; //type: int32
        ydk::YLeaf dot1dstpholdtime; //type: int32
        ydk::YLeaf dot1dstpforwarddelay; //type: int32
        ydk::YLeaf dot1dstpbridgemaxage; //type: int32
        ydk::YLeaf dot1dstpbridgehellotime; //type: int32
        ydk::YLeaf dot1dstpbridgeforwarddelay; //type: int32
        class Dot1Dstpprotocolspecification;

}; // BRIDGEMIB::Dot1Dstp


class BRIDGEMIB::Dot1Dstpporttable : public ydk::Entity
{
    public:
        Dot1Dstpporttable();
        ~Dot1Dstpporttable();

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

        class Dot1Dstpportentry; //type: BRIDGEMIB::Dot1Dstpporttable::Dot1Dstpportentry

        std::vector<std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dstpporttable::Dot1Dstpportentry> > dot1dstpportentry;
        
}; // BRIDGEMIB::Dot1Dstpporttable


class BRIDGEMIB::Dot1Dstpporttable::Dot1Dstpportentry : public ydk::Entity
{
    public:
        Dot1Dstpportentry();
        ~Dot1Dstpportentry();

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

        ydk::YLeaf dot1dstpport; //type: int32
        ydk::YLeaf dot1dstpportpriority; //type: int32
        ydk::YLeaf dot1dstpportstate; //type: Dot1Dstpportstate
        ydk::YLeaf dot1dstpportenable; //type: Dot1Dstpportenable
        ydk::YLeaf dot1dstpportpathcost; //type: int32
        ydk::YLeaf dot1dstpportdesignatedroot; //type: binary
        ydk::YLeaf dot1dstpportdesignatedcost; //type: int32
        ydk::YLeaf dot1dstpportdesignatedbridge; //type: binary
        ydk::YLeaf dot1dstpportdesignatedport; //type: binary
        ydk::YLeaf dot1dstpportforwardtransitions; //type: uint32
        ydk::YLeaf dot1dstpportpathcost32; //type: int32
        ydk::YLeaf stpxlongstpportpathcost; //type: uint32
        class Dot1Dstpportstate;
        class Dot1Dstpportenable;

}; // BRIDGEMIB::Dot1Dstpporttable::Dot1Dstpportentry


class BRIDGEMIB::Dot1Dtp : public ydk::Entity
{
    public:
        Dot1Dtp();
        ~Dot1Dtp();

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

        ydk::YLeaf dot1dtplearnedentrydiscards; //type: uint32
        ydk::YLeaf dot1dtpagingtime; //type: int32

}; // BRIDGEMIB::Dot1Dtp


class BRIDGEMIB::Dot1Dtpfdbtable : public ydk::Entity
{
    public:
        Dot1Dtpfdbtable();
        ~Dot1Dtpfdbtable();

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

        class Dot1Dtpfdbentry; //type: BRIDGEMIB::Dot1Dtpfdbtable::Dot1Dtpfdbentry

        std::vector<std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dtpfdbtable::Dot1Dtpfdbentry> > dot1dtpfdbentry;
        
}; // BRIDGEMIB::Dot1Dtpfdbtable


class BRIDGEMIB::Dot1Dtpfdbtable::Dot1Dtpfdbentry : public ydk::Entity
{
    public:
        Dot1Dtpfdbentry();
        ~Dot1Dtpfdbentry();

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

        ydk::YLeaf dot1dtpfdbaddress; //type: string
        ydk::YLeaf dot1dtpfdbport; //type: int32
        ydk::YLeaf dot1dtpfdbstatus; //type: Dot1Dtpfdbstatus
        class Dot1Dtpfdbstatus;

}; // BRIDGEMIB::Dot1Dtpfdbtable::Dot1Dtpfdbentry


class BRIDGEMIB::Dot1Dtpporttable : public ydk::Entity
{
    public:
        Dot1Dtpporttable();
        ~Dot1Dtpporttable();

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

        class Dot1Dtpportentry; //type: BRIDGEMIB::Dot1Dtpporttable::Dot1Dtpportentry

        std::vector<std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dtpporttable::Dot1Dtpportentry> > dot1dtpportentry;
        
}; // BRIDGEMIB::Dot1Dtpporttable


class BRIDGEMIB::Dot1Dtpporttable::Dot1Dtpportentry : public ydk::Entity
{
    public:
        Dot1Dtpportentry();
        ~Dot1Dtpportentry();

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

        ydk::YLeaf dot1dtpport; //type: int32
        ydk::YLeaf dot1dtpportmaxinfo; //type: int32
        ydk::YLeaf dot1dtpportinframes; //type: uint32
        ydk::YLeaf dot1dtpportoutframes; //type: uint32
        ydk::YLeaf dot1dtpportindiscards; //type: uint32

}; // BRIDGEMIB::Dot1Dtpporttable::Dot1Dtpportentry

class BRIDGEMIB::Dot1Dbase::Dot1Dbasetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf transparent_only;
        static const ydk::Enum::YLeaf sourceroute_only;
        static const ydk::Enum::YLeaf srt;

};

class BRIDGEMIB::Dot1Dbaseporttable::Dot1Dbaseportentry::Dot1Qportacceptableframetypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admitAll;
        static const ydk::Enum::YLeaf admitOnlyVlanTagged;

};

class BRIDGEMIB::Dot1Dstatictable::Dot1Dstaticentry::Dot1Dstaticstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf deleteOnReset;
        static const ydk::Enum::YLeaf deleteOnTimeout;

};

class BRIDGEMIB::Dot1Dstp::Dot1Dstpprotocolspecification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf decLb100;
        static const ydk::Enum::YLeaf ieee8021d;

};

class BRIDGEMIB::Dot1Dstpporttable::Dot1Dstpportentry::Dot1Dstpportstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf blocking;
        static const ydk::Enum::YLeaf listening;
        static const ydk::Enum::YLeaf learning;
        static const ydk::Enum::YLeaf forwarding;
        static const ydk::Enum::YLeaf broken;

};

class BRIDGEMIB::Dot1Dstpporttable::Dot1Dstpportentry::Dot1Dstpportenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class BRIDGEMIB::Dot1Dtpfdbtable::Dot1Dtpfdbentry::Dot1Dtpfdbstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf learned;
        static const ydk::Enum::YLeaf self;
        static const ydk::Enum::YLeaf mgmt;

};


}
}

#endif /* _BRIDGE_MIB_ */

