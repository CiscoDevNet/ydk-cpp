#ifndef _CISCO_ENTITY_QFP_MIB_
#define _CISCO_ENTITY_QFP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_ENTITY_QFP_MIB {

class CiscoEntityQfpMib : public Entity
{
    public:
        CiscoEntityQfpMib();
        ~CiscoEntityQfpMib();

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

        class Ciscoentityqfp; //type: CiscoEntityQfpMib::Ciscoentityqfp
        class Ciscoentityqfpnotif; //type: CiscoEntityQfpMib::Ciscoentityqfpnotif
        class Ceqfpsystemtable; //type: CiscoEntityQfpMib::Ceqfpsystemtable
        class Ceqfputilizationtable; //type: CiscoEntityQfpMib::Ceqfputilizationtable
        class Ceqfpmemoryresourcetable; //type: CiscoEntityQfpMib::Ceqfpmemoryresourcetable
        class Ceqfpthroughputtable; //type: CiscoEntityQfpMib::Ceqfpthroughputtable

        std::shared_ptr<CISCO_ENTITY_QFP_MIB::CiscoEntityQfpMib::Ceqfpmemoryresourcetable> ceqfpmemoryresourcetable_;
        std::shared_ptr<CISCO_ENTITY_QFP_MIB::CiscoEntityQfpMib::Ceqfpsystemtable> ceqfpsystemtable_;
        std::shared_ptr<CISCO_ENTITY_QFP_MIB::CiscoEntityQfpMib::Ceqfpthroughputtable> ceqfpthroughputtable_;
        std::shared_ptr<CISCO_ENTITY_QFP_MIB::CiscoEntityQfpMib::Ceqfputilizationtable> ceqfputilizationtable_;
        std::shared_ptr<CISCO_ENTITY_QFP_MIB::CiscoEntityQfpMib::Ciscoentityqfp> ciscoentityqfp_;
        std::shared_ptr<CISCO_ENTITY_QFP_MIB::CiscoEntityQfpMib::Ciscoentityqfpnotif> ciscoentityqfpnotif_;
        
}; // CiscoEntityQfpMib


class CiscoEntityQfpMib::Ciscoentityqfp : public Entity
{
    public:
        Ciscoentityqfp();
        ~Ciscoentityqfp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ceqfpfivesecondutilalgo; //type: CeqfpfivesecondutilalgoEnum
        YLeaf ceqfponeminuteutilalgo; //type: CeqfponeminuteutilalgoEnum
        YLeaf ceqfpfiveminutesutilalgo; //type: CeqfpfiveminutesutilalgoEnum
        YLeaf ceqfpsixtyminutesutilalgo; //type: CeqfpsixtyminutesutilalgoEnum
        class CeqfpfivesecondutilalgoEnum;
        class CeqfponeminuteutilalgoEnum;
        class CeqfpfiveminutesutilalgoEnum;
        class CeqfpsixtyminutesutilalgoEnum;

}; // CiscoEntityQfpMib::Ciscoentityqfp


class CiscoEntityQfpMib::Ciscoentityqfpnotif : public Entity
{
    public:
        Ciscoentityqfpnotif();
        ~Ciscoentityqfpnotif();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ceqfpmemoryresthreshnotifenabled; //type: boolean
        YLeaf ceqfpthroughputnotifenabled; //type: uint32

}; // CiscoEntityQfpMib::Ciscoentityqfpnotif


class CiscoEntityQfpMib::Ceqfpsystemtable : public Entity
{
    public:
        Ceqfpsystemtable();
        ~Ceqfpsystemtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceqfpsystementry; //type: CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry

        std::vector<std::shared_ptr<CISCO_ENTITY_QFP_MIB::CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry> > ceqfpsystementry_;
        
}; // CiscoEntityQfpMib::Ceqfpsystemtable


class CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry : public Entity
{
    public:
        Ceqfpsystementry();
        ~Ceqfpsystementry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceqfpsystemtrafficdirection; //type: CeqfpsystemtrafficdirectionEnum
        YLeaf ceqfpsystemstate; //type: CeqfpsystemstateEnum
        YLeaf ceqfpnumbersystemloads; //type: uint32
        YLeaf ceqfpsystemlastloadtime; //type: string
        class CeqfpsystemtrafficdirectionEnum;
        class CeqfpsystemstateEnum;

}; // CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry


class CiscoEntityQfpMib::Ceqfputilizationtable : public Entity
{
    public:
        Ceqfputilizationtable();
        ~Ceqfputilizationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceqfputilizationentry; //type: CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry

        std::vector<std::shared_ptr<CISCO_ENTITY_QFP_MIB::CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry> > ceqfputilizationentry_;
        
}; // CiscoEntityQfpMib::Ceqfputilizationtable


class CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry : public Entity
{
    public:
        Ceqfputilizationentry();
        ~Ceqfputilizationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceqfputiltimeinterval; //type: CiscoqfptimeintervalEnum
        YLeaf ceqfputilinputprioritypktrate; //type: uint64
        YLeaf ceqfputilinputprioritybitrate; //type: uint64
        YLeaf ceqfputilinputnonprioritypktrate; //type: uint64
        YLeaf ceqfputilinputnonprioritybitrate; //type: uint64
        YLeaf ceqfputilinputtotalpktrate; //type: uint64
        YLeaf ceqfputilinputtotalbitrate; //type: uint64
        YLeaf ceqfputiloutputprioritypktrate; //type: uint64
        YLeaf ceqfputiloutputprioritybitrate; //type: uint64
        YLeaf ceqfputiloutputnonprioritypktrate; //type: uint64
        YLeaf ceqfputiloutputnonprioritybitrate; //type: uint64
        YLeaf ceqfputiloutputtotalpktrate; //type: uint64
        YLeaf ceqfputiloutputtotalbitrate; //type: uint64
        YLeaf ceqfputilprocessingload; //type: uint32

}; // CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry


class CiscoEntityQfpMib::Ceqfpmemoryresourcetable : public Entity
{
    public:
        Ceqfpmemoryresourcetable();
        ~Ceqfpmemoryresourcetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceqfpmemoryresourceentry; //type: CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry

        std::vector<std::shared_ptr<CISCO_ENTITY_QFP_MIB::CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry> > ceqfpmemoryresourceentry_;
        
}; // CiscoEntityQfpMib::Ceqfpmemoryresourcetable


class CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry : public Entity
{
    public:
        Ceqfpmemoryresourceentry();
        ~Ceqfpmemoryresourceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceqfpmemoryrestype; //type: CiscoqfpmemoryresourceEnum
        YLeaf ceqfpmemoryrestotal; //type: uint32
        YLeaf ceqfpmemoryresinuse; //type: uint32
        YLeaf ceqfpmemoryresfree; //type: uint32
        YLeaf ceqfpmemoryreslowfreewatermark; //type: uint32
        YLeaf ceqfpmemoryresrisingthreshold; //type: uint32
        YLeaf ceqfpmemoryresfallingthreshold; //type: uint32
        YLeaf ceqfpmemoryrestotalovrflw; //type: uint32
        YLeaf ceqfpmemoryhcrestotal; //type: uint64
        YLeaf ceqfpmemoryresinuseovrflw; //type: uint32
        YLeaf ceqfpmemoryhcresinuse; //type: uint64
        YLeaf ceqfpmemoryresfreeovrflw; //type: uint32
        YLeaf ceqfpmemoryhcresfree; //type: uint64
        YLeaf ceqfpmemoryreslowfreewatermarkovrflw; //type: uint32
        YLeaf ceqfpmemoryhcreslowfreewatermark; //type: uint64

}; // CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry


class CiscoEntityQfpMib::Ceqfpthroughputtable : public Entity
{
    public:
        Ceqfpthroughputtable();
        ~Ceqfpthroughputtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceqfpthroughputentry; //type: CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry

        std::vector<std::shared_ptr<CISCO_ENTITY_QFP_MIB::CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry> > ceqfpthroughputentry_;
        
}; // CiscoEntityQfpMib::Ceqfpthroughputtable


class CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry : public Entity
{
    public:
        Ceqfpthroughputentry();
        ~Ceqfpthroughputentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceqfpthroughputlicensedbw; //type: uint64
        YLeaf ceqfpthroughputlevel; //type: CeqfpthroughputlevelEnum
        YLeaf ceqfpthroughputinterval; //type: int32
        YLeaf ceqfpthroughputthreshold; //type: int32
        YLeaf ceqfpthroughputavgrate; //type: uint64
        class CeqfpthroughputlevelEnum;

}; // CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry

class CiscoqfptimeintervalEnum : public Enum
{
    public:
        static const Enum::YLeaf fiveSeconds;
        static const Enum::YLeaf oneMinute;
        static const Enum::YLeaf fiveMinutes;
        static const Enum::YLeaf sixtyMinutes;

};

class CiscoqfpmemoryresourceEnum : public Enum
{
    public:
        static const Enum::YLeaf dram;

};

class CiscoEntityQfpMib::Ciscoentityqfp::CeqfpfivesecondutilalgoEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf fiveSecSample;

};

class CiscoEntityQfpMib::Ciscoentityqfp::CeqfponeminuteutilalgoEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf fiveSecSMA;

};

class CiscoEntityQfpMib::Ciscoentityqfp::CeqfpfiveminutesutilalgoEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf fiveSecSMA;

};

class CiscoEntityQfpMib::Ciscoentityqfp::CeqfpsixtyminutesutilalgoEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf fiveSecSMA;

};

class CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::CeqfpsystemtrafficdirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ingress;
        static const Enum::YLeaf egress;
        static const Enum::YLeaf both;

};

class CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::CeqfpsystemstateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf reset;
        static const Enum::YLeaf init;
        static const Enum::YLeaf active;
        static const Enum::YLeaf activeSolo;
        static const Enum::YLeaf standby;
        static const Enum::YLeaf hotStandby;

};

class CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::CeqfpthroughputlevelEnum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf exceed;

};


}
}

#endif /* _CISCO_ENTITY_QFP_MIB_ */

