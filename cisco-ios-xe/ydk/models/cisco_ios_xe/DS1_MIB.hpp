#ifndef _DS1_MIB_
#define _DS1_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace DS1_MIB {

class Ds1Mib : public Entity
{
    public:
        Ds1Mib();
        ~Ds1Mib();

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

        class Dsx1Configtable; //type: Ds1Mib::Dsx1Configtable
        class Dsx1Currenttable; //type: Ds1Mib::Dsx1Currenttable
        class Dsx1Intervaltable; //type: Ds1Mib::Dsx1Intervaltable
        class Dsx1Totaltable; //type: Ds1Mib::Dsx1Totaltable
        class Dsx1Farendcurrenttable; //type: Ds1Mib::Dsx1Farendcurrenttable
        class Dsx1Farendintervaltable; //type: Ds1Mib::Dsx1Farendintervaltable
        class Dsx1Farendtotaltable; //type: Ds1Mib::Dsx1Farendtotaltable
        class Dsx1Fractable; //type: Ds1Mib::Dsx1Fractable
        class Dsx1Chanmappingtable; //type: Ds1Mib::Dsx1Chanmappingtable

        std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Chanmappingtable> dsx1chanmappingtable_;
        std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Configtable> dsx1configtable_;
        std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Currenttable> dsx1currenttable_;
        std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Farendcurrenttable> dsx1farendcurrenttable_;
        std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Farendintervaltable> dsx1farendintervaltable_;
        std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Farendtotaltable> dsx1farendtotaltable_;
        std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Fractable> dsx1fractable_;
        std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Intervaltable> dsx1intervaltable_;
        std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Totaltable> dsx1totaltable_;
        
}; // Ds1Mib


class Ds1Mib::Dsx1Configtable : public Entity
{
    public:
        Dsx1Configtable();
        ~Dsx1Configtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx1Configentry; //type: Ds1Mib::Dsx1Configtable::Dsx1Configentry

        std::vector<std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Configtable::Dsx1Configentry> > dsx1configentry_;
        
}; // Ds1Mib::Dsx1Configtable


class Ds1Mib::Dsx1Configtable::Dsx1Configentry : public Entity
{
    public:
        Dsx1Configentry();
        ~Dsx1Configentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx1lineindex; //type: int32
        YLeaf dsx1ifindex; //type: int32
        YLeaf dsx1timeelapsed; //type: int32
        YLeaf dsx1validintervals; //type: int32
        YLeaf dsx1linetype; //type: Dsx1LinetypeEnum
        YLeaf dsx1linecoding; //type: Dsx1LinecodingEnum
        YLeaf dsx1sendcode; //type: Dsx1SendcodeEnum
        YLeaf dsx1circuitidentifier; //type: string
        YLeaf dsx1loopbackconfig; //type: Dsx1LoopbackconfigEnum
        YLeaf dsx1linestatus; //type: int32
        YLeaf dsx1signalmode; //type: Dsx1SignalmodeEnum
        YLeaf dsx1transmitclocksource; //type: Dsx1TransmitclocksourceEnum
        YLeaf dsx1fdl; //type: int32
        YLeaf dsx1invalidintervals; //type: int32
        YLeaf dsx1linelength; //type: int32
        YLeaf dsx1linestatuslastchange; //type: uint32
        YLeaf dsx1linestatuschangetrapenable; //type: Dsx1LinestatuschangetrapenableEnum
        YLeaf dsx1loopbackstatus; //type: int32
        YLeaf dsx1ds1channelnumber; //type: int32
        YLeaf dsx1channelization; //type: Dsx1ChannelizationEnum
        class Dsx1LinetypeEnum;
        class Dsx1LinecodingEnum;
        class Dsx1SendcodeEnum;
        class Dsx1LoopbackconfigEnum;
        class Dsx1SignalmodeEnum;
        class Dsx1TransmitclocksourceEnum;
        class Dsx1LinestatuschangetrapenableEnum;
        class Dsx1ChannelizationEnum;

}; // Ds1Mib::Dsx1Configtable::Dsx1Configentry


class Ds1Mib::Dsx1Currenttable : public Entity
{
    public:
        Dsx1Currenttable();
        ~Dsx1Currenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx1Currententry; //type: Ds1Mib::Dsx1Currenttable::Dsx1Currententry

        std::vector<std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Currenttable::Dsx1Currententry> > dsx1currententry_;
        
}; // Ds1Mib::Dsx1Currenttable


class Ds1Mib::Dsx1Currenttable::Dsx1Currententry : public Entity
{
    public:
        Dsx1Currententry();
        ~Dsx1Currententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx1currentindex; //type: int32
        YLeaf dsx1currentess; //type: uint32
        YLeaf dsx1currentsess; //type: uint32
        YLeaf dsx1currentsefss; //type: uint32
        YLeaf dsx1currentuass; //type: uint32
        YLeaf dsx1currentcsss; //type: uint32
        YLeaf dsx1currentpcvs; //type: uint32
        YLeaf dsx1currentless; //type: uint32
        YLeaf dsx1currentbess; //type: uint32
        YLeaf dsx1currentdms; //type: uint32
        YLeaf dsx1currentlcvs; //type: uint32

}; // Ds1Mib::Dsx1Currenttable::Dsx1Currententry


class Ds1Mib::Dsx1Intervaltable : public Entity
{
    public:
        Dsx1Intervaltable();
        ~Dsx1Intervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx1Intervalentry; //type: Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry

        std::vector<std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry> > dsx1intervalentry_;
        
}; // Ds1Mib::Dsx1Intervaltable


class Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry : public Entity
{
    public:
        Dsx1Intervalentry();
        ~Dsx1Intervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx1intervalindex; //type: int32
        YLeaf dsx1intervalnumber; //type: int32
        YLeaf dsx1intervaless; //type: uint32
        YLeaf dsx1intervalsess; //type: uint32
        YLeaf dsx1intervalsefss; //type: uint32
        YLeaf dsx1intervaluass; //type: uint32
        YLeaf dsx1intervalcsss; //type: uint32
        YLeaf dsx1intervalpcvs; //type: uint32
        YLeaf dsx1intervalless; //type: uint32
        YLeaf dsx1intervalbess; //type: uint32
        YLeaf dsx1intervaldms; //type: uint32
        YLeaf dsx1intervallcvs; //type: uint32
        YLeaf dsx1intervalvaliddata; //type: boolean

}; // Ds1Mib::Dsx1Intervaltable::Dsx1Intervalentry


class Ds1Mib::Dsx1Totaltable : public Entity
{
    public:
        Dsx1Totaltable();
        ~Dsx1Totaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx1Totalentry; //type: Ds1Mib::Dsx1Totaltable::Dsx1Totalentry

        std::vector<std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Totaltable::Dsx1Totalentry> > dsx1totalentry_;
        
}; // Ds1Mib::Dsx1Totaltable


class Ds1Mib::Dsx1Totaltable::Dsx1Totalentry : public Entity
{
    public:
        Dsx1Totalentry();
        ~Dsx1Totalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx1totalindex; //type: int32
        YLeaf dsx1totaless; //type: uint32
        YLeaf dsx1totalsess; //type: uint32
        YLeaf dsx1totalsefss; //type: uint32
        YLeaf dsx1totaluass; //type: uint32
        YLeaf dsx1totalcsss; //type: uint32
        YLeaf dsx1totalpcvs; //type: uint32
        YLeaf dsx1totalless; //type: uint32
        YLeaf dsx1totalbess; //type: uint32
        YLeaf dsx1totaldms; //type: uint32
        YLeaf dsx1totallcvs; //type: uint32

}; // Ds1Mib::Dsx1Totaltable::Dsx1Totalentry


class Ds1Mib::Dsx1Farendcurrenttable : public Entity
{
    public:
        Dsx1Farendcurrenttable();
        ~Dsx1Farendcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx1Farendcurrententry; //type: Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry

        std::vector<std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry> > dsx1farendcurrententry_;
        
}; // Ds1Mib::Dsx1Farendcurrenttable


class Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry : public Entity
{
    public:
        Dsx1Farendcurrententry();
        ~Dsx1Farendcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx1farendcurrentindex; //type: int32
        YLeaf dsx1farendtimeelapsed; //type: int32
        YLeaf dsx1farendvalidintervals; //type: int32
        YLeaf dsx1farendcurrentess; //type: uint32
        YLeaf dsx1farendcurrentsess; //type: uint32
        YLeaf dsx1farendcurrentsefss; //type: uint32
        YLeaf dsx1farendcurrentuass; //type: uint32
        YLeaf dsx1farendcurrentcsss; //type: uint32
        YLeaf dsx1farendcurrentless; //type: uint32
        YLeaf dsx1farendcurrentpcvs; //type: uint32
        YLeaf dsx1farendcurrentbess; //type: uint32
        YLeaf dsx1farendcurrentdms; //type: uint32
        YLeaf dsx1farendinvalidintervals; //type: int32

}; // Ds1Mib::Dsx1Farendcurrenttable::Dsx1Farendcurrententry


class Ds1Mib::Dsx1Farendintervaltable : public Entity
{
    public:
        Dsx1Farendintervaltable();
        ~Dsx1Farendintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx1Farendintervalentry; //type: Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry

        std::vector<std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry> > dsx1farendintervalentry_;
        
}; // Ds1Mib::Dsx1Farendintervaltable


class Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry : public Entity
{
    public:
        Dsx1Farendintervalentry();
        ~Dsx1Farendintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx1farendintervalindex; //type: int32
        YLeaf dsx1farendintervalnumber; //type: int32
        YLeaf dsx1farendintervaless; //type: uint32
        YLeaf dsx1farendintervalsess; //type: uint32
        YLeaf dsx1farendintervalsefss; //type: uint32
        YLeaf dsx1farendintervaluass; //type: uint32
        YLeaf dsx1farendintervalcsss; //type: uint32
        YLeaf dsx1farendintervalless; //type: uint32
        YLeaf dsx1farendintervalpcvs; //type: uint32
        YLeaf dsx1farendintervalbess; //type: uint32
        YLeaf dsx1farendintervaldms; //type: uint32
        YLeaf dsx1farendintervalvaliddata; //type: boolean

}; // Ds1Mib::Dsx1Farendintervaltable::Dsx1Farendintervalentry


class Ds1Mib::Dsx1Farendtotaltable : public Entity
{
    public:
        Dsx1Farendtotaltable();
        ~Dsx1Farendtotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx1Farendtotalentry; //type: Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry

        std::vector<std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry> > dsx1farendtotalentry_;
        
}; // Ds1Mib::Dsx1Farendtotaltable


class Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry : public Entity
{
    public:
        Dsx1Farendtotalentry();
        ~Dsx1Farendtotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx1farendtotalindex; //type: int32
        YLeaf dsx1farendtotaless; //type: uint32
        YLeaf dsx1farendtotalsess; //type: uint32
        YLeaf dsx1farendtotalsefss; //type: uint32
        YLeaf dsx1farendtotaluass; //type: uint32
        YLeaf dsx1farendtotalcsss; //type: uint32
        YLeaf dsx1farendtotalless; //type: uint32
        YLeaf dsx1farendtotalpcvs; //type: uint32
        YLeaf dsx1farendtotalbess; //type: uint32
        YLeaf dsx1farendtotaldms; //type: uint32

}; // Ds1Mib::Dsx1Farendtotaltable::Dsx1Farendtotalentry


class Ds1Mib::Dsx1Fractable : public Entity
{
    public:
        Dsx1Fractable();
        ~Dsx1Fractable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx1Fracentry; //type: Ds1Mib::Dsx1Fractable::Dsx1Fracentry

        std::vector<std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Fractable::Dsx1Fracentry> > dsx1fracentry_;
        
}; // Ds1Mib::Dsx1Fractable


class Ds1Mib::Dsx1Fractable::Dsx1Fracentry : public Entity
{
    public:
        Dsx1Fracentry();
        ~Dsx1Fracentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx1fracindex; //type: int32
        YLeaf dsx1fracnumber; //type: int32
        YLeaf dsx1fracifindex; //type: int32

}; // Ds1Mib::Dsx1Fractable::Dsx1Fracentry


class Ds1Mib::Dsx1Chanmappingtable : public Entity
{
    public:
        Dsx1Chanmappingtable();
        ~Dsx1Chanmappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx1Chanmappingentry; //type: Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry

        std::vector<std::shared_ptr<DS1_MIB::Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry> > dsx1chanmappingentry_;
        
}; // Ds1Mib::Dsx1Chanmappingtable


class Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry : public Entity
{
    public:
        Dsx1Chanmappingentry();
        ~Dsx1Chanmappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to DS1_MIB::Ds1Mib::Dsx1Configtable::Dsx1Configentry::dsx1ds1channelnumber)
        YLeaf dsx1ds1channelnumber;
        YLeaf dsx1chanmappedifindex; //type: int32

}; // Ds1Mib::Dsx1Chanmappingtable::Dsx1Chanmappingentry

class Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf dsx1ESF;
        static const Enum::YLeaf dsx1D4;
        static const Enum::YLeaf dsx1E1;
        static const Enum::YLeaf dsx1E1CRC;
        static const Enum::YLeaf dsx1E1MF;
        static const Enum::YLeaf dsx1E1CRCMF;
        static const Enum::YLeaf dsx1Unframed;
        static const Enum::YLeaf dsx1E1Unframed;
        static const Enum::YLeaf dsx1DS2M12;
        static const Enum::YLeaf dsx2E2;

};

class Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinecodingEnum : public Enum
{
    public:
        static const Enum::YLeaf dsx1JBZS;
        static const Enum::YLeaf dsx1B8ZS;
        static const Enum::YLeaf dsx1HDB3;
        static const Enum::YLeaf dsx1ZBTSI;
        static const Enum::YLeaf dsx1AMI;
        static const Enum::YLeaf other;
        static const Enum::YLeaf dsx1B6ZS;

};

class Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SendcodeEnum : public Enum
{
    public:
        static const Enum::YLeaf dsx1SendNoCode;
        static const Enum::YLeaf dsx1SendLineCode;
        static const Enum::YLeaf dsx1SendPayloadCode;
        static const Enum::YLeaf dsx1SendResetCode;
        static const Enum::YLeaf dsx1SendQRS;
        static const Enum::YLeaf dsx1Send511Pattern;
        static const Enum::YLeaf dsx1Send3in24Pattern;
        static const Enum::YLeaf dsx1SendOtherTestPattern;

};

class Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LoopbackconfigEnum : public Enum
{
    public:
        static const Enum::YLeaf dsx1NoLoop;
        static const Enum::YLeaf dsx1PayloadLoop;
        static const Enum::YLeaf dsx1LineLoop;
        static const Enum::YLeaf dsx1OtherLoop;
        static const Enum::YLeaf dsx1InwardLoop;
        static const Enum::YLeaf dsx1DualLoop;

};

class Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1SignalmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf robbedBit;
        static const Enum::YLeaf bitOriented;
        static const Enum::YLeaf messageOriented;
        static const Enum::YLeaf other;

};

class Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1TransmitclocksourceEnum : public Enum
{
    public:
        static const Enum::YLeaf loopTiming;
        static const Enum::YLeaf localTiming;
        static const Enum::YLeaf throughTiming;

};

class Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1LinestatuschangetrapenableEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class Ds1Mib::Dsx1Configtable::Dsx1Configentry::Dsx1ChannelizationEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabledDs0;
        static const Enum::YLeaf enabledDs1;

};


}
}

#endif /* _DS1_MIB_ */

