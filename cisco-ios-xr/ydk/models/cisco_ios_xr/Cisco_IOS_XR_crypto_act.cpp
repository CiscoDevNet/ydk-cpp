
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_act.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_act {

KeyGenerateRsaGeneralKeysRpc::KeyGenerateRsaGeneralKeysRpc()
    :
    key_label{YType::str, "key-label"},
    key_modulus{YType::int32, "key-modulus"}
{
    yang_name = "key-generate-rsa-general-keys"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

KeyGenerateRsaGeneralKeysRpc::~KeyGenerateRsaGeneralKeysRpc()
{
}

bool KeyGenerateRsaGeneralKeysRpc::has_data() const
{
    return key_label.is_set
	|| key_modulus.is_set;
}

bool KeyGenerateRsaGeneralKeysRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(key_label.operation)
	|| is_set(key_modulus.operation);
}

std::string KeyGenerateRsaGeneralKeysRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-rsa-general-keys";

    return path_buffer.str();

}

EntityPath KeyGenerateRsaGeneralKeysRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_label.is_set || is_set(key_label.operation)) leaf_name_data.push_back(key_label.get_name_leafdata());
    if (key_modulus.is_set || is_set(key_modulus.operation)) leaf_name_data.push_back(key_modulus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyGenerateRsaGeneralKeysRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & KeyGenerateRsaGeneralKeysRpc::get_children()
{
    return children;
}

void KeyGenerateRsaGeneralKeysRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-label")
    {
        key_label = value;
    }
    if(value_path == "key-modulus")
    {
        key_modulus = value;
    }
}

std::shared_ptr<Entity> KeyGenerateRsaGeneralKeysRpc::clone_ptr() const
{
    return std::make_shared<KeyGenerateRsaGeneralKeysRpc>();
}

std::string KeyGenerateRsaGeneralKeysRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyGenerateRsaGeneralKeysRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyGenerateRsaGeneralKeysRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

KeyGenerateRsaUsageKeysRpc::KeyGenerateRsaUsageKeysRpc()
    :
    key_label{YType::str, "key-label"},
    key_modulus{YType::int32, "key-modulus"}
{
    yang_name = "key-generate-rsa-usage-keys"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

KeyGenerateRsaUsageKeysRpc::~KeyGenerateRsaUsageKeysRpc()
{
}

bool KeyGenerateRsaUsageKeysRpc::has_data() const
{
    return key_label.is_set
	|| key_modulus.is_set;
}

bool KeyGenerateRsaUsageKeysRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(key_label.operation)
	|| is_set(key_modulus.operation);
}

std::string KeyGenerateRsaUsageKeysRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-rsa-usage-keys";

    return path_buffer.str();

}

EntityPath KeyGenerateRsaUsageKeysRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_label.is_set || is_set(key_label.operation)) leaf_name_data.push_back(key_label.get_name_leafdata());
    if (key_modulus.is_set || is_set(key_modulus.operation)) leaf_name_data.push_back(key_modulus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyGenerateRsaUsageKeysRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & KeyGenerateRsaUsageKeysRpc::get_children()
{
    return children;
}

void KeyGenerateRsaUsageKeysRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-label")
    {
        key_label = value;
    }
    if(value_path == "key-modulus")
    {
        key_modulus = value;
    }
}

std::shared_ptr<Entity> KeyGenerateRsaUsageKeysRpc::clone_ptr() const
{
    return std::make_shared<KeyGenerateRsaUsageKeysRpc>();
}

std::string KeyGenerateRsaUsageKeysRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyGenerateRsaUsageKeysRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyGenerateRsaUsageKeysRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

KeyGenerateRsaRpc::KeyGenerateRsaRpc()
    :
    key_label{YType::str, "key-label"},
    key_modulus{YType::int32, "key-modulus"}
{
    yang_name = "key-generate-rsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

KeyGenerateRsaRpc::~KeyGenerateRsaRpc()
{
}

bool KeyGenerateRsaRpc::has_data() const
{
    return key_label.is_set
	|| key_modulus.is_set;
}

bool KeyGenerateRsaRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(key_label.operation)
	|| is_set(key_modulus.operation);
}

std::string KeyGenerateRsaRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-rsa";

    return path_buffer.str();

}

EntityPath KeyGenerateRsaRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_label.is_set || is_set(key_label.operation)) leaf_name_data.push_back(key_label.get_name_leafdata());
    if (key_modulus.is_set || is_set(key_modulus.operation)) leaf_name_data.push_back(key_modulus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyGenerateRsaRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & KeyGenerateRsaRpc::get_children()
{
    return children;
}

void KeyGenerateRsaRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-label")
    {
        key_label = value;
    }
    if(value_path == "key-modulus")
    {
        key_modulus = value;
    }
}

std::shared_ptr<Entity> KeyGenerateRsaRpc::clone_ptr() const
{
    return std::make_shared<KeyGenerateRsaRpc>();
}

std::string KeyGenerateRsaRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyGenerateRsaRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyGenerateRsaRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

KeyGenerateDsaRpc::KeyGenerateDsaRpc()
    :
    key_modulus{YType::int32, "key-modulus"}
{
    yang_name = "key-generate-dsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

KeyGenerateDsaRpc::~KeyGenerateDsaRpc()
{
}

bool KeyGenerateDsaRpc::has_data() const
{
    return key_modulus.is_set;
}

bool KeyGenerateDsaRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(key_modulus.operation);
}

std::string KeyGenerateDsaRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-generate-dsa";

    return path_buffer.str();

}

EntityPath KeyGenerateDsaRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_modulus.is_set || is_set(key_modulus.operation)) leaf_name_data.push_back(key_modulus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyGenerateDsaRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & KeyGenerateDsaRpc::get_children()
{
    return children;
}

void KeyGenerateDsaRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-modulus")
    {
        key_modulus = value;
    }
}

std::shared_ptr<Entity> KeyGenerateDsaRpc::clone_ptr() const
{
    return std::make_shared<KeyGenerateDsaRpc>();
}

std::string KeyGenerateDsaRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyGenerateDsaRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyGenerateDsaRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

KeyZeroizeRsaRpc::KeyZeroizeRsaRpc()
    :
    key_label{YType::str, "key-label"}
{
    yang_name = "key-zeroize-rsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

KeyZeroizeRsaRpc::~KeyZeroizeRsaRpc()
{
}

bool KeyZeroizeRsaRpc::has_data() const
{
    return key_label.is_set;
}

bool KeyZeroizeRsaRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(key_label.operation);
}

std::string KeyZeroizeRsaRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-zeroize-rsa";

    return path_buffer.str();

}

EntityPath KeyZeroizeRsaRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_label.is_set || is_set(key_label.operation)) leaf_name_data.push_back(key_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyZeroizeRsaRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & KeyZeroizeRsaRpc::get_children()
{
    return children;
}

void KeyZeroizeRsaRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-label")
    {
        key_label = value;
    }
}

std::shared_ptr<Entity> KeyZeroizeRsaRpc::clone_ptr() const
{
    return std::make_shared<KeyZeroizeRsaRpc>();
}

std::string KeyZeroizeRsaRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyZeroizeRsaRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyZeroizeRsaRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

KeyZeroizeDsaRpc::KeyZeroizeDsaRpc()
{
    yang_name = "key-zeroize-dsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

KeyZeroizeDsaRpc::~KeyZeroizeDsaRpc()
{
}

bool KeyZeroizeDsaRpc::has_data() const
{
    return false;
}

bool KeyZeroizeDsaRpc::has_operation() const
{
    return is_set(operation);
}

std::string KeyZeroizeDsaRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-zeroize-dsa";

    return path_buffer.str();

}

EntityPath KeyZeroizeDsaRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyZeroizeDsaRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & KeyZeroizeDsaRpc::get_children()
{
    return children;
}

void KeyZeroizeDsaRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> KeyZeroizeDsaRpc::clone_ptr() const
{
    return std::make_shared<KeyZeroizeDsaRpc>();
}

std::string KeyZeroizeDsaRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyZeroizeDsaRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyZeroizeDsaRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

KeyZeroizeAuthenticationRsaRpc::KeyZeroizeAuthenticationRsaRpc()
{
    yang_name = "key-zeroize-authentication-rsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

KeyZeroizeAuthenticationRsaRpc::~KeyZeroizeAuthenticationRsaRpc()
{
}

bool KeyZeroizeAuthenticationRsaRpc::has_data() const
{
    return false;
}

bool KeyZeroizeAuthenticationRsaRpc::has_operation() const
{
    return is_set(operation);
}

std::string KeyZeroizeAuthenticationRsaRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-zeroize-authentication-rsa";

    return path_buffer.str();

}

EntityPath KeyZeroizeAuthenticationRsaRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyZeroizeAuthenticationRsaRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & KeyZeroizeAuthenticationRsaRpc::get_children()
{
    return children;
}

void KeyZeroizeAuthenticationRsaRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> KeyZeroizeAuthenticationRsaRpc::clone_ptr() const
{
    return std::make_shared<KeyZeroizeAuthenticationRsaRpc>();
}

std::string KeyZeroizeAuthenticationRsaRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyZeroizeAuthenticationRsaRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyZeroizeAuthenticationRsaRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

KeyImportAuthenticationRsaRpc::KeyImportAuthenticationRsaRpc()
    :
    path{YType::str, "path"}
{
    yang_name = "key-import-authentication-rsa"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

KeyImportAuthenticationRsaRpc::~KeyImportAuthenticationRsaRpc()
{
}

bool KeyImportAuthenticationRsaRpc::has_data() const
{
    return path.is_set;
}

bool KeyImportAuthenticationRsaRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation);
}

std::string KeyImportAuthenticationRsaRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:key-import-authentication-rsa";

    return path_buffer.str();

}

EntityPath KeyImportAuthenticationRsaRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyImportAuthenticationRsaRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & KeyImportAuthenticationRsaRpc::get_children()
{
    return children;
}

void KeyImportAuthenticationRsaRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
}

std::shared_ptr<Entity> KeyImportAuthenticationRsaRpc::clone_ptr() const
{
    return std::make_shared<KeyImportAuthenticationRsaRpc>();
}

std::string KeyImportAuthenticationRsaRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string KeyImportAuthenticationRsaRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function KeyImportAuthenticationRsaRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

CaAuthenticateRpc::CaAuthenticateRpc()
    :
    server_name{YType::str, "server-name"}
{
    yang_name = "ca-authenticate"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

CaAuthenticateRpc::~CaAuthenticateRpc()
{
}

bool CaAuthenticateRpc::has_data() const
{
    return server_name.is_set;
}

bool CaAuthenticateRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(server_name.operation);
}

std::string CaAuthenticateRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-authenticate";

    return path_buffer.str();

}

EntityPath CaAuthenticateRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_name.is_set || is_set(server_name.operation)) leaf_name_data.push_back(server_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CaAuthenticateRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CaAuthenticateRpc::get_children()
{
    return children;
}

void CaAuthenticateRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-name")
    {
        server_name = value;
    }
}

std::shared_ptr<Entity> CaAuthenticateRpc::clone_ptr() const
{
    return std::make_shared<CaAuthenticateRpc>();
}

std::string CaAuthenticateRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaAuthenticateRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaAuthenticateRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

CaEnrollRpc::CaEnrollRpc()
    :
    server_name{YType::str, "server-name"}
{
    yang_name = "ca-enroll"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

CaEnrollRpc::~CaEnrollRpc()
{
}

bool CaEnrollRpc::has_data() const
{
    return server_name.is_set;
}

bool CaEnrollRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(server_name.operation);
}

std::string CaEnrollRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-enroll";

    return path_buffer.str();

}

EntityPath CaEnrollRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_name.is_set || is_set(server_name.operation)) leaf_name_data.push_back(server_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CaEnrollRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CaEnrollRpc::get_children()
{
    return children;
}

void CaEnrollRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-name")
    {
        server_name = value;
    }
}

std::shared_ptr<Entity> CaEnrollRpc::clone_ptr() const
{
    return std::make_shared<CaEnrollRpc>();
}

std::string CaEnrollRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaEnrollRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaEnrollRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

CaImportCertificateRpc::CaImportCertificateRpc()
    :
    server_name{YType::str, "server-name"}
{
    yang_name = "ca-import-certificate"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

CaImportCertificateRpc::~CaImportCertificateRpc()
{
}

bool CaImportCertificateRpc::has_data() const
{
    return server_name.is_set;
}

bool CaImportCertificateRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(server_name.operation);
}

std::string CaImportCertificateRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-import-certificate";

    return path_buffer.str();

}

EntityPath CaImportCertificateRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_name.is_set || is_set(server_name.operation)) leaf_name_data.push_back(server_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CaImportCertificateRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CaImportCertificateRpc::get_children()
{
    return children;
}

void CaImportCertificateRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-name")
    {
        server_name = value;
    }
}

std::shared_ptr<Entity> CaImportCertificateRpc::clone_ptr() const
{
    return std::make_shared<CaImportCertificateRpc>();
}

std::string CaImportCertificateRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaImportCertificateRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaImportCertificateRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

CaCancelEnrollRpc::CaCancelEnrollRpc()
    :
    server_name{YType::str, "server-name"}
{
    yang_name = "ca-cancel-enroll"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

CaCancelEnrollRpc::~CaCancelEnrollRpc()
{
}

bool CaCancelEnrollRpc::has_data() const
{
    return server_name.is_set;
}

bool CaCancelEnrollRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(server_name.operation);
}

std::string CaCancelEnrollRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-cancel-enroll";

    return path_buffer.str();

}

EntityPath CaCancelEnrollRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_name.is_set || is_set(server_name.operation)) leaf_name_data.push_back(server_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CaCancelEnrollRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CaCancelEnrollRpc::get_children()
{
    return children;
}

void CaCancelEnrollRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-name")
    {
        server_name = value;
    }
}

std::shared_ptr<Entity> CaCancelEnrollRpc::clone_ptr() const
{
    return std::make_shared<CaCancelEnrollRpc>();
}

std::string CaCancelEnrollRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaCancelEnrollRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaCancelEnrollRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

CaCrlRequestRpc::CaCrlRequestRpc()
    :
    uri{YType::str, "uri"}
    	,
    output(std::make_shared<CaCrlRequestRpc::Output>())
{
    output->parent = this;
    children["output"] = output;

    yang_name = "ca-crl-request"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

CaCrlRequestRpc::~CaCrlRequestRpc()
{
}

bool CaCrlRequestRpc::has_data() const
{
    return uri.is_set
	|| (output !=  nullptr && output->has_data());
}

bool CaCrlRequestRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(uri.operation)
	|| (output !=  nullptr && output->has_operation());
}

std::string CaCrlRequestRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-crl-request";

    return path_buffer.str();

}

EntityPath CaCrlRequestRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uri.is_set || is_set(uri.operation)) leaf_name_data.push_back(uri.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CaCrlRequestRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
        else
        {
            output = std::make_shared<CaCrlRequestRpc::Output>();
            output->parent = this;
            children["output"] = output;
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CaCrlRequestRpc::get_children()
{
    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
    }

    return children;
}

void CaCrlRequestRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uri")
    {
        uri = value;
    }
}

std::shared_ptr<Entity> CaCrlRequestRpc::clone_ptr() const
{
    return std::make_shared<CaCrlRequestRpc>();
}

std::string CaCrlRequestRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaCrlRequestRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaCrlRequestRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

CaCrlRequestRpc::Output::Output()
    :
    certificate{YType::str, "certificate"}
{
    yang_name = "output"; yang_parent_name = "ca-crl-request";
}

CaCrlRequestRpc::Output::~Output()
{
}

bool CaCrlRequestRpc::Output::has_data() const
{
    return certificate.is_set;
}

bool CaCrlRequestRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(certificate.operation);
}

std::string CaCrlRequestRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath CaCrlRequestRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-act:ca-crl-request/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate.is_set || is_set(certificate.operation)) leaf_name_data.push_back(certificate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CaCrlRequestRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CaCrlRequestRpc::Output::get_children()
{
    return children;
}

void CaCrlRequestRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "certificate")
    {
        certificate = value;
    }
}

CaTrustpoolImportUrlRpc::CaTrustpoolImportUrlRpc()
    :
    url{YType::str, "url"}
{
    yang_name = "ca-trustpool-import-url"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

CaTrustpoolImportUrlRpc::~CaTrustpoolImportUrlRpc()
{
}

bool CaTrustpoolImportUrlRpc::has_data() const
{
    return url.is_set;
}

bool CaTrustpoolImportUrlRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(url.operation);
}

std::string CaTrustpoolImportUrlRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-trustpool-import-url";

    return path_buffer.str();

}

EntityPath CaTrustpoolImportUrlRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CaTrustpoolImportUrlRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CaTrustpoolImportUrlRpc::get_children()
{
    return children;
}

void CaTrustpoolImportUrlRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "url")
    {
        url = value;
    }
}

std::shared_ptr<Entity> CaTrustpoolImportUrlRpc::clone_ptr() const
{
    return std::make_shared<CaTrustpoolImportUrlRpc>();
}

std::string CaTrustpoolImportUrlRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaTrustpoolImportUrlRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaTrustpoolImportUrlRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

CaTrustpoolImportUrlCleanRpc::CaTrustpoolImportUrlCleanRpc()
    :
    url{YType::str, "url"}
{
    yang_name = "ca-trustpool-import-url-clean"; yang_parent_name = "Cisco-IOS-XR-crypto-act";
}

CaTrustpoolImportUrlCleanRpc::~CaTrustpoolImportUrlCleanRpc()
{
}

bool CaTrustpoolImportUrlCleanRpc::has_data() const
{
    return url.is_set;
}

bool CaTrustpoolImportUrlCleanRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(url.operation);
}

std::string CaTrustpoolImportUrlCleanRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-act:ca-trustpool-import-url-clean";

    return path_buffer.str();

}

EntityPath CaTrustpoolImportUrlCleanRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CaTrustpoolImportUrlCleanRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CaTrustpoolImportUrlCleanRpc::get_children()
{
    return children;
}

void CaTrustpoolImportUrlCleanRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "url")
    {
        url = value;
    }
}

std::shared_ptr<Entity> CaTrustpoolImportUrlCleanRpc::clone_ptr() const
{
    return std::make_shared<CaTrustpoolImportUrlCleanRpc>();
}

std::string CaTrustpoolImportUrlCleanRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CaTrustpoolImportUrlCleanRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CaTrustpoolImportUrlCleanRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}


}
}

