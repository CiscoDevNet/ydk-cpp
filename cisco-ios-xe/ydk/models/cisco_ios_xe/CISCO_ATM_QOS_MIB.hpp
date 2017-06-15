#ifndef _CISCO_ATM_QOS_MIB_
#define _CISCO_ATM_QOS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_ATM_QOS_MIB {

class CiscoAtmQosMib : public Entity
{
    public:
        CiscoAtmQosMib();
        ~CiscoAtmQosMib();

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

        class Caqvccparamstable; //type: CiscoAtmQosMib::Caqvccparamstable
        class Caqvpcparamstable; //type: CiscoAtmQosMib::Caqvpcparamstable
        class Caqqueuingparamstable; //type: CiscoAtmQosMib::Caqqueuingparamstable
        class Caqqueuingparamsclasstable; //type: CiscoAtmQosMib::Caqqueuingparamsclasstable

        std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqqueuingparamsclasstable> caqqueuingparamsclasstable_;
        std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqqueuingparamstable> caqqueuingparamstable_;
        std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqvccparamstable> caqvccparamstable_;
        std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqvpcparamstable> caqvpcparamstable_;
        
}; // CiscoAtmQosMib


class CiscoAtmQosMib::Caqvccparamstable : public Entity
{
    public:
        Caqvccparamstable();
        ~Caqvccparamstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Caqvccparamsentry; //type: CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry

        std::vector<std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry> > caqvccparamsentry_;
        
}; // CiscoAtmQosMib::Caqvccparamstable


class CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry : public Entity
{
    public:
        Caqvccparamsentry();
        ~Caqvccparamsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvci)
        YLeaf atmvclvci;
        YLeaf caqvccparamstype; //type: AtmservicecategoryEnum
        YLeaf caqvccparamspcrin0; //type: uint32
        YLeaf caqvccparamspcrin01; //type: uint32
        YLeaf caqvccparamspcrout0; //type: uint32
        YLeaf caqvccparamspcrout01; //type: uint32
        YLeaf caqvccparamsscrin0; //type: uint32
        YLeaf caqvccparamsscrin01; //type: uint32
        YLeaf caqvccparamsscrout0; //type: uint32
        YLeaf caqvccparamsscrout01; //type: uint32
        YLeaf caqvccparamsbcsin0; //type: uint32
        YLeaf caqvccparamsbcsin01; //type: uint32
        YLeaf caqvccparamsbcsout0; //type: uint32
        YLeaf caqvccparamsbcsout01; //type: uint32
        YLeaf caqvccparamsinheritlevel; //type: VcparamconfiglocationEnum
        YLeaf caqvccparamsmcrin; //type: uint32
        YLeaf caqvccparamsmcrout; //type: uint32
        YLeaf caqvccparamsinvrdf; //type: uint32
        YLeaf caqvccparamsinvrif; //type: uint32
        YLeaf caqvccparamsrfl; //type: VcparamconfiglocationEnum
        YLeaf caqvccparamscdv; //type: uint32
        YLeaf caqvccparamscdvt; //type: uint32
        YLeaf caqvccparamsicr; //type: uint32
        YLeaf caqvccparamstbe; //type: uint32
        YLeaf caqvccparamsfrtt; //type: uint32
        YLeaf caqvccparamsnrm; //type: uint32
        YLeaf caqvccparamsinvtrm; //type: uint32
        YLeaf caqvccparamsinvcdf; //type: uint32
        YLeaf caqvccparamsadtf; //type: uint32

}; // CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry


class CiscoAtmQosMib::Caqvpcparamstable : public Entity
{
    public:
        Caqvpcparamstable();
        ~Caqvpcparamstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Caqvpcparamsentry; //type: CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry

        std::vector<std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry> > caqvpcparamsentry_;
        
}; // CiscoAtmQosMib::Caqvpcparamstable


class CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry : public Entity
{
    public:
        Caqvpcparamsentry();
        ~Caqvpcparamsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvpltable::Atmvplentry::atmvplvpi)
        YLeaf atmvplvpi;
        YLeaf caqvpcparamsvpstate; //type: VpstateEnum
        YLeaf caqvpcparamspeakrate; //type: uint32
        YLeaf caqvpcparamscesrate; //type: uint32
        YLeaf caqvpcparamsdatavccount; //type: int32
        YLeaf caqvpcparamscesvccount; //type: int32
        YLeaf caqvpcparamsvcdf4seg; //type: int32
        YLeaf caqvpcparamsvcdf4ete; //type: int32
        YLeaf caqvpcparamsscr; //type: uint32
        YLeaf caqvpcparamsmbs; //type: uint32
        YLeaf caqvpcparamsavailbw; //type: uint32

}; // CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry


class CiscoAtmQosMib::Caqqueuingparamstable : public Entity
{
    public:
        Caqqueuingparamstable();
        ~Caqqueuingparamstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Caqqueuingparamsentry; //type: CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry

        std::vector<std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry> > caqqueuingparamsentry_;
        
}; // CiscoAtmQosMib::Caqqueuingparamstable


class CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry : public Entity
{
    public:
        Caqqueuingparamsentry();
        ~Caqqueuingparamsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvci)
        YLeaf atmvclvci;
        YLeaf caqqueuingparamsmeanqdepth; //type: uint32

}; // CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry


class CiscoAtmQosMib::Caqqueuingparamsclasstable : public Entity
{
    public:
        Caqqueuingparamsclasstable();
        ~Caqqueuingparamsclasstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Caqqueuingparamsclassentry; //type: CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry

        std::vector<std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry> > caqqueuingparamsclassentry_;
        
}; // CiscoAtmQosMib::Caqqueuingparamsclasstable


class CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry : public Entity
{
    public:
        Caqqueuingparamsclassentry();
        ~Caqqueuingparamsclassentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvci)
        YLeaf atmvclvci;
        YLeaf caqqueuingparamsclassindex; //type: int32
        YLeaf caqqueuingparamsclassranddrp; //type: uint32
        YLeaf caqqueuingparamsclasstaildrp; //type: uint32
        YLeaf caqqueuingparamsclassminthre; //type: uint32
        YLeaf caqqueuingparamsclassmaxthre; //type: uint32
        YLeaf caqqueuingparamsclassmrkprob; //type: uint32

}; // CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry

class VcparamconfiglocationEnum : public Enum
{
    public:
        static const Enum::YLeaf configDefault;
        static const Enum::YLeaf configVcDirect;
        static const Enum::YLeaf configVcClass;
        static const Enum::YLeaf configVcClassSubInterface;
        static const Enum::YLeaf configVcClassInterface;

};

class VpstateEnum : public Enum
{
    public:
        static const Enum::YLeaf vpStateInactive;
        static const Enum::YLeaf vpStateActive;

};


}
}

#endif /* _CISCO_ATM_QOS_MIB_ */

