#ifndef _CISCO_ENHANCED_MEMPOOL_MIB_
#define _CISCO_ENHANCED_MEMPOOL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_ENHANCED_MEMPOOL_MIB {

class CiscoEnhancedMempoolMib : public Entity
{
    public:
        CiscoEnhancedMempoolMib();
        ~CiscoEnhancedMempoolMib();

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

        class Cempnotificationconfig; //type: CiscoEnhancedMempoolMib::Cempnotificationconfig
        class Cempmempooltable; //type: CiscoEnhancedMempoolMib::Cempmempooltable
        class Cempmembufferpooltable; //type: CiscoEnhancedMempoolMib::Cempmembufferpooltable
        class Cempmembuffercachepooltable; //type: CiscoEnhancedMempoolMib::Cempmembuffercachepooltable

        std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmembuffercachepooltable> cempmembuffercachepooltable;
        std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmembufferpooltable> cempmembufferpooltable;
        std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmempooltable> cempmempooltable;
        std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempnotificationconfig> cempnotificationconfig;
        
}; // CiscoEnhancedMempoolMib


class CiscoEnhancedMempoolMib::Cempnotificationconfig : public Entity
{
    public:
        Cempnotificationconfig();
        ~Cempnotificationconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cempmembuffernotifyenabled; //type: boolean

}; // CiscoEnhancedMempoolMib::Cempnotificationconfig


class CiscoEnhancedMempoolMib::Cempmempooltable : public Entity
{
    public:
        Cempmempooltable();
        ~Cempmempooltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cempmempoolentry; //type: CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry

        std::vector<std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry> > cempmempoolentry;
        
}; // CiscoEnhancedMempoolMib::Cempmempooltable


class CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry : public Entity
{
    public:
        Cempmempoolentry();
        ~Cempmempoolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cempmempoolindex; //type: int32
        YLeaf cempmempooltype; //type: CempmempooltypesEnum
        YLeaf cempmempoolname; //type: string
        YLeaf cempmempoolplatformmemory; //type: string
        YLeaf cempmempoolalternate; //type: int32
        YLeaf cempmempoolvalid; //type: boolean
        YLeaf cempmempoolused; //type: uint32
        YLeaf cempmempoolfree; //type: uint32
        YLeaf cempmempoollargestfree; //type: uint32
        YLeaf cempmempoollowestfree; //type: uint32
        YLeaf cempmempoolusedlowwatermark; //type: uint32
        YLeaf cempmempoolallochit; //type: uint32
        YLeaf cempmempoolallocmiss; //type: uint32
        YLeaf cempmempoolfreehit; //type: uint32
        YLeaf cempmempoolfreemiss; //type: uint32
        YLeaf cempmempoolshared; //type: uint32
        YLeaf cempmempoolusedovrflw; //type: uint32
        YLeaf cempmempoolhcused; //type: uint64
        YLeaf cempmempoolfreeovrflw; //type: uint32
        YLeaf cempmempoolhcfree; //type: uint64
        YLeaf cempmempoollargestfreeovrflw; //type: uint32
        YLeaf cempmempoolhclargestfree; //type: uint64
        YLeaf cempmempoollowestfreeovrflw; //type: uint32
        YLeaf cempmempoolhclowestfree; //type: uint64
        YLeaf cempmempoolusedlowwatermarkovrflw; //type: uint32
        YLeaf cempmempoolhcusedlowwatermark; //type: uint64
        YLeaf cempmempoolsharedovrflw; //type: uint32
        YLeaf cempmempoolhcshared; //type: uint64

}; // CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry


class CiscoEnhancedMempoolMib::Cempmembufferpooltable : public Entity
{
    public:
        Cempmembufferpooltable();
        ~Cempmembufferpooltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cempmembufferpoolentry; //type: CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry

        std::vector<std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry> > cempmembufferpoolentry;
        
}; // CiscoEnhancedMempoolMib::Cempmembufferpooltable


class CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry : public Entity
{
    public:
        Cempmembufferpoolentry();
        ~Cempmembufferpoolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cempmembufferpoolindex; //type: uint32
        YLeaf cempmembuffermempoolindex; //type: int32
        YLeaf cempmembuffername; //type: string
        YLeaf cempmembufferdynamic; //type: boolean
        YLeaf cempmembuffersize; //type: uint32
        YLeaf cempmembuffermin; //type: uint32
        YLeaf cempmembuffermax; //type: uint32
        YLeaf cempmembufferpermanent; //type: uint32
        YLeaf cempmembuffertransient; //type: uint32
        YLeaf cempmembuffertotal; //type: uint32
        YLeaf cempmembufferfree; //type: uint32
        YLeaf cempmembufferhit; //type: uint32
        YLeaf cempmembuffermiss; //type: uint32
        YLeaf cempmembufferfreehit; //type: uint32
        YLeaf cempmembufferfreemiss; //type: uint32
        YLeaf cempmembufferpermchange; //type: int32
        YLeaf cempmembufferpeak; //type: uint32
        YLeaf cempmembufferpeaktime; //type: uint32
        YLeaf cempmembuffertrim; //type: uint32
        YLeaf cempmembuffergrow; //type: uint32
        YLeaf cempmembufferfailures; //type: uint32
        YLeaf cempmembuffernostorage; //type: uint32

}; // CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry


class CiscoEnhancedMempoolMib::Cempmembuffercachepooltable : public Entity
{
    public:
        Cempmembuffercachepooltable();
        ~Cempmembuffercachepooltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cempmembuffercachepoolentry; //type: CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry

        std::vector<std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry> > cempmembuffercachepoolentry;
        
}; // CiscoEnhancedMempoolMib::Cempmembuffercachepooltable


class CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry : public Entity
{
    public:
        Cempmembuffercachepoolentry();
        ~Cempmembuffercachepoolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        //type: uint32 (refers to CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::cempmembufferpoolindex)
        YLeaf cempmembufferpoolindex;
        YLeaf cempmembuffercachesize; //type: uint32
        YLeaf cempmembuffercachetotal; //type: uint32
        YLeaf cempmembuffercacheused; //type: uint32
        YLeaf cempmembuffercachehit; //type: uint32
        YLeaf cempmembuffercachemiss; //type: uint32
        YLeaf cempmembuffercachethreshold; //type: uint32
        YLeaf cempmembuffercachethresholdcount; //type: uint32

}; // CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry

class CempmempooltypesEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf processorMemory;
        static const Enum::YLeaf ioMemory;
        static const Enum::YLeaf pciMemory;
        static const Enum::YLeaf fastMemory;
        static const Enum::YLeaf multibusMemory;
        static const Enum::YLeaf interruptStackMemory;
        static const Enum::YLeaf processStackMemory;
        static const Enum::YLeaf localExceptionMemory;
        static const Enum::YLeaf virtualMemory;
        static const Enum::YLeaf reservedMemory;
        static const Enum::YLeaf imageMemory;
        static const Enum::YLeaf asicMemory;
        static const Enum::YLeaf posixMemory;

};


}
}

#endif /* _CISCO_ENHANCED_MEMPOOL_MIB_ */

